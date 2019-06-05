%code top {
    #include "TypesInclude.hh"
}

%{

extern SymbolTable* getTempTable();
extern SymbolTable* popAndGetPrevious();
extern void forcePushTableAsCurrent(SymbolTable* someTable);
extern void* arvore;
extern char* yytext;
extern int get_line_number();

int yylex(void);

void yyerror (char const *s);

%}

%union {
    LexicalValue lexicalValue;
    Node* node;
}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token TK_PR_FOR
%token TK_PR_SWITCH
%token TK_PR_CASE
%token TK_PR_BREAK
%token TK_PR_CONTINUE
%token TK_PR_CLASS
%token TK_PR_PRIVATE
%token TK_PR_PUBLIC
%token TK_PR_PROTECTED
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_OC_SL
%token TK_OC_SR
%token TK_OC_FORWARD_PIPE
%token TK_OC_BASH_PIPE
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%start programa

%left '-' '+'
%left '*' '/' '%' '|'
%left '!' '<' '>' TK_OC_LE TK_OC_GE TK_OC_EQ TK_OC_NE TK_OC_AND TK_OC_OR
%left '?' ':'
%right '^' '&' '#'


%type <node> programa
%type <node> declarations
%type <node> identifier
%type <node> expression
%type <node> assignment_command
%type <node> valid_command
%type <node> list_of_commands
%type <node> command_block
%type <node> declaration_type
%type <node> is_static
%type <node> function_declaration
%type <node> list_of_parameters_declaration
%type <node> is_const
%type <node> parameters_declaration_list
// %type <node> parameter_declaration
%type <node> global_var_declaration
%type <node> input_command
%type <node> output_command
%type <node> function_call_command
%type <node> function_call_parameters_command
%type <node> parameters_list
%type <node> parameter
%type <node> shift_command
%type <node> literal_values
%type <node> local_var_declaration
%type <node> local_var_init_valid_values
%type <node> local_var_attribute
%type <node> is_local_var_init
%type <node> local_var_init
%type <node> break_flow_command
%type <node> break_flow_valid_commands
%type <node> if_then_else_command
%type <node> if_then_only_command
%type <node> if_then_else_too_command
%type <node> for_command
%type <node> for_list
%type <node> for_list_parameter
%type <node> while_command
%type <node> get_table_value
%type <node> get_reference_address
%type <node> reference_access_value
%type <lexicalValue> '#'
%type <lexicalValue> '?'
%type <lexicalValue> '!'
%type <lexicalValue> '+'
%type <lexicalValue> ']'
%type <lexicalValue> '['
%type <lexicalValue> '='
%type <lexicalValue> ';'
%type <lexicalValue> '{'
%type <lexicalValue> '}'
%type <lexicalValue> '-'
%type <lexicalValue> '/'
%type <lexicalValue> '*'
%type <lexicalValue> '%'
%type <lexicalValue> '|'
%type <lexicalValue> '&'
%type <lexicalValue> '^'
%type <lexicalValue> '<'
%type <lexicalValue> '>'
%type <lexicalValue> ','
%type <lexicalValue> TK_OC_LE
%type <lexicalValue> TK_OC_GE
%type <lexicalValue> TK_OC_EQ
%type <lexicalValue> TK_OC_NE
%type <lexicalValue> TK_OC_AND
%type <lexicalValue> TK_OC_OR
%type <lexicalValue> TK_OC_SL
%type <lexicalValue> TK_OC_SR
%type <lexicalValue> TK_LIT_INT
%type <lexicalValue> TK_LIT_FLOAT
%type <lexicalValue> TK_LIT_TRUE
%type <lexicalValue> TK_LIT_FALSE
%type <lexicalValue> TK_LIT_CHAR
%type <lexicalValue> TK_LIT_STRING
%type <lexicalValue> TK_IDENTIFICADOR
%type <lexicalValue> TK_PR_INT
%type <lexicalValue> TK_PR_FLOAT
%type <lexicalValue> TK_PR_BOOL
%type <lexicalValue> TK_PR_CHAR
%type <lexicalValue> TK_PR_STRING
%type <lexicalValue> TK_PR_STATIC
%type <lexicalValue> TK_PR_CONST
%type <lexicalValue> TK_PR_INPUT
%type <lexicalValue> TK_PR_OUTPUT
%type <lexicalValue> TK_PR_CONTINUE
%type <lexicalValue> TK_PR_BREAK
%type <lexicalValue> TK_PR_RETURN
%type <lexicalValue> TK_PR_IF
%type <lexicalValue> TK_PR_THEN
%type <lexicalValue> TK_PR_ELSE
%type <lexicalValue> TK_PR_FOR
%type <lexicalValue> TK_PR_WHILE
%type <lexicalValue> TK_PR_DO

%%

programa
    : declarations { arvore = $1; $$ = $1; }
    | %empty { arvore = NULL; $$ = NULL; }
;

declarations
    : declarations global_var_declaration { $$ = new ListOfDeclarations($1, $2); }
    | declarations function_declaration { $$ = new ListOfDeclarations($1, $2); }
    | global_var_declaration { $$ = $1; }
    | function_declaration { $$ = $1; }
;

global_var_declaration
    : TK_IDENTIFICADOR is_static declaration_type ';' 
    { $$ = new GlobalVariableDeclaration($1, $2, $3); }
    | TK_IDENTIFICADOR '[' TK_LIT_INT ']' is_static declaration_type ';' 
    { $$ = new GlobalVectorVariableDeclaration($1, new LiteralNode($3), $5, $6); }
;

/* BEGIN FUNCTION HEADER */
function_declaration
    : is_static declaration_type TK_IDENTIFICADOR { $<lexicalValue>$ = $3; } list_of_parameters_declaration 
        { 
            SymbolTable* tableWithFunctionParametersDeclaration = getTempTable();

            // GO BACK TO GLOBAL SCOPE TO ADD FUNCTION DECLARATION TO GLOBAL SCOPE
            popAndGetPrevious(); 

            Node* declarationType = $2;
            LexicalValue identifier = $3;
            Node* listOfParametersDeclaration = $5;
            int type = getTempTable()->getTypeOfDeclaration(declarationType->value);
            auto functionParameters = Node::getFunctionParametersList(listOfParametersDeclaration);
            getTempTable()->insertFunctionDeclaration(identifier, type, functionParameters);            
            
            // FORCE INSERT PARAMETERS DECLARATION AS PART OF INNER SCOPE OF THE COMMAND BLOCK
            forcePushTableAsCurrent(tableWithFunctionParametersDeclaration);
            $<node>$ = $5; 
        } command_block
    {  $$ = new FunctionDeclarationNode($3, $1, $2, $5, $7); }
;

list_of_parameters_declaration
    : '(' parameters_declaration_list ')' { $$ = $2; }
    | '(' ')' { $$ = NULL; }
;

parameters_declaration_list
    : is_const declaration_type TK_IDENTIFICADOR ',' parameters_declaration_list 
    { $$ = new ParametersDeclarationList($3, $1, $2, $5); }
    | is_const declaration_type TK_IDENTIFICADOR
    { pushTempTableAndClear(); $$ = new ParameterDeclaration($3, $1, $2); }
;

/* END FUNCTION HEADER */

command_block
    : '{' list_of_commands '}' { $$ = new CommandBlockNode($2); popAndGetPrevious(); }
    | '{' '}' { $$ = new CommandBlockNode(NULL); popAndGetPrevious(); }
;

list_of_commands
    : list_of_commands valid_command ';' { $$ = new ListOfCommandsNode($1, $2); }
    | valid_command ';' { pushTempTableAndClear(); $$ = $1; }
;

valid_command
    : local_var_declaration { $$ = new ValidCommandNode($1); }
    | assignment_command { $$ = new ValidCommandNode($1); }
    | command_block { $$ = new ValidCommandNode($1); }
    | input_command { $$ = new ValidCommandNode($1); }
    | output_command { $$ = new ValidCommandNode($1); }
    | function_call_command { $$ = new ValidCommandNode($1); }
    | shift_command { $$ = new ValidCommandNode($1); }
    | break_flow_command { $$ = new ValidCommandNode($1); }
    | if_then_else_command { $$ = new ValidCommandNode($1); }
    | for_command { $$ = new ValidCommandNode($1); }
    | while_command { $$ = new ValidCommandNode($1); }
;

/* BEGIN LOCAL VAR */
local_var_declaration
    : local_var_attribute declaration_type TK_IDENTIFICADOR is_local_var_init
    { $$ = new LocalVariableDeclarationNode($3, $1, $2, $4); }
;

local_var_attribute
    : is_static TK_PR_CONST { $$ = new LocalVariableDeclarationAttributeNode($2, $1); }
    | TK_PR_STATIC { $$ = new LeafNode($1); }
    | %empty { $$ = NULL; }
;

is_local_var_init
    : local_var_init { $$ = $1; }
    | %empty { $$ = NULL; }
;

local_var_init
    : TK_OC_LE local_var_init_valid_values { $$ = new GenericNode($1, { $2 }); }
;

local_var_init_valid_values
    : literal_values { $$ = $1; }
    | TK_IDENTIFICADOR { $$ = new LeafNode($1); }
;
/* END LOCAL VAR */

/* BEGIN ASSIGNMENT COMMAND */

assignment_command
    : identifier '=' expression { $$ = new AssignmentCommandNode($2, $1, $3); }
    | identifier '=' TK_LIT_CHAR { $$ = new AssignmentCommandNode($2, $1, new LiteralNode($3)); }
    | identifier '=' TK_LIT_STRING { $$ = new AssignmentCommandNode($2, $1, new LiteralNode($3)); }
;

/* END ASSIGNMENT COMMAND*/

/* BEGIN I/O COMMAND */

input_command
    : TK_PR_INPUT expression { $$ = new InputCommandNode($1, $2); }
;

output_command
    : TK_PR_OUTPUT parameters_list { $$ = new OutputCommandNode($1, $2); }
;

/* END I/O COMMAND */

/* BEGIN FUNCTION CALL COMMAND */

function_call_command
    : TK_IDENTIFICADOR function_call_parameters_command { $$ = new FunctionCallCommandNode($1, $2); }
;

function_call_parameters_command
    : '(' parameters_list ')' { $$ = $2; }
    | '(' ')' { $$ = NULL; }
;

/* END FUNCTION CALL COMMAND */

/* BEGIN SHIFT LEFT AND RIGHT COMMAND */

shift_command
    : identifier TK_OC_SL expression { $$ = new ShiftCommand($2, $1, $3); }
    | identifier TK_OC_SR expression { $$ = new ShiftCommand($2, $1, $3); }
;

/* END SHIFT LEFT AND RIGHT COMMAND */

/* BEGIN RETURN, BREAK, CONTINUE COMMAND */

break_flow_command
    : break_flow_valid_commands { $$ = $1; }
;

break_flow_valid_commands
    : TK_PR_RETURN expression { $$ = new GenericNode($1, { $2 }); }
    | TK_PR_BREAK { $$ = new LeafNode($1); }
    | TK_PR_CONTINUE { $$ = new LeafNode($1); }
;

/* END RETURN, BREAK, CONTINUE COMMAND */

/* BEGIN FLOW CONTROL COMMAND */

// IF STATEMENT
if_then_else_command
    : if_then_only_command { $$ = $1; }
    | if_then_else_too_command { $$ = $1; }
;

if_then_only_command
    : TK_PR_IF '(' expression ')' TK_PR_THEN command_block
    { $$ = new IfThenCommandNode($1, $3, $6); }
;

if_then_else_too_command
    : TK_PR_IF '(' expression ')' TK_PR_THEN command_block TK_PR_ELSE command_block
    { $$ = new IfThenElseCommandNode($1, $3, $6, $8); }
;

// FOR LOOP

for_command
    : TK_PR_FOR '(' for_list ':' expression ':' for_list ')' command_block
    { $$ = new ForCommandNode($1, $3, $5, $7, $9); }
;

for_list
    : for_list_parameter ',' for_list { $$ = new ForParametersDeclarationList($1->value, $1, $3); }
    | for_list_parameter { $$ = $1; }
;

for_list_parameter
    : local_var_declaration { $$ = $1; }
    | assignment_command { $$ = $1; }
    | shift_command { $$ = $1; }
;

// WHILE LOOP

while_command
    : TK_PR_WHILE '(' expression ')' TK_PR_DO command_block { $$ = new WhileCommandNode($1, $3, $6); }
;

/* END FLOW CONTROL COMMAND */

parameters_list
    : parameter ',' parameters_list { $$ = new ParametersListNode($1, $3); }
    | parameter { $$ = $1; }
;

parameter
    : expression { $$ = $1; }
    | TK_LIT_CHAR { $$ = new LiteralNode($1); }
    | TK_LIT_STRING { $$ = new LiteralNode($1); }
;

is_const
    : TK_PR_CONST { $$ = new LeafNode($1); }
    | %empty { $$ = NULL; }
;

identifier
    : TK_IDENTIFICADOR '[' expression ']' { $$ = new IdentifierVectorNode($1, $3); }
    | TK_IDENTIFICADOR { $$ = new IdentifierNode($1); }
;

is_static
    : TK_PR_STATIC { $$ = new LeafNode($1); }
    | %empty { $$ = NULL; }
;

declaration_type
    : TK_PR_INT { $$ = new LeafNode($1); }
    | TK_PR_FLOAT { $$ = new LeafNode($1); }
    | TK_PR_BOOL { $$ = new LeafNode($1); }
    | TK_PR_CHAR { $$ = new LeafNode($1); }
    | TK_PR_STRING { $$ = new LeafNode($1); }
;

literal_values
    : TK_LIT_INT { $$ = new LiteralNode($1); }
    | TK_LIT_FLOAT { $$ = new LiteralNode($1); }
    | TK_LIT_TRUE { $$ = new LiteralNode($1); }
    | TK_LIT_FALSE { $$ = new LiteralNode($1); }
    | TK_LIT_CHAR { $$ = new LiteralNode($1); }
    | TK_LIT_STRING { $$ = new LiteralNode($1); }
;

expression
    : get_table_value { $$ = $1; }
    | get_reference_address { $$ = $1; }
    | reference_access_value { $$ = $1; }
    | identifier { $$ = $1; }
    | TK_LIT_INT { $$ = new LiteralNode($1); }
    | TK_LIT_FLOAT { $$ = new LiteralNode($1); }
    | TK_LIT_FALSE { $$ = new LiteralNode($1); }
    | TK_LIT_TRUE { $$ = new LiteralNode($1); }
    | function_call_command { $$ = $1; }
;

expression
    : '(' expression ')' { $$ = $2; }
;

expression
    : expression '+' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '-' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '/' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '*' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '%' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | '+' expression { $$ = new UnaryExpressionNode($1, $2); }
    | '-' expression { $$ = new UnaryExpressionNode($1, $2); }
    | '!' expression { $$ = new UnaryExpressionNode($1, $2); }
    | expression '|' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '&' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '^' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '<' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '>' expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_LE expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_GE expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_EQ expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_NE expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_AND expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression TK_OC_OR expression { $$ = new BinaryExpressionNode($2, $1, $3); }
    | expression '?' expression ':' expression { $$ = new TernaryExpressionNode($2, $1, $3, $5); }
;

reference_access_value
    : '*' TK_IDENTIFICADOR { $$ = new UnaryExpressionNode($1, new LeafNode($2)); }
;

get_reference_address
    : '&' TK_IDENTIFICADOR { $$ = new UnaryExpressionNode($1, new LeafNode($2)); }
;

get_table_value
    : '#' TK_IDENTIFICADOR { $$ = new UnaryExpressionNode($1, new LeafNode($2)); }
;

%%

void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}