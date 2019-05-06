%{

#include <stdio.h>
#include "valor_lexico.h"
#define YYSTYPE struct No
#include "tipos_de_token.h"

extern void* arvore;
extern char* yytext;
extern int get_line_number();

extern struct No criaNo(struct No no);
extern struct No criaNoComFilhos(struct No ancestral, int numero_de_filhos, ...);
extern struct No criaNoSolitarioComFilhos(int numero_de_filhos, ...);
extern struct No* copiaNo(struct No no);
extern struct No criaNoLiteral(struct No no);

int yylex(void);

void yyerror (char const *s);

%}

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

%%

programa
    : declarations { arvore = copiaNo($1); } 
    | %empty
;

declarations
    : declarations global_var_declaration { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | declarations function_declaration { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | global_var_declaration { $$ = criaNoSolitarioComFilhos(1, $1); }
    | function_declaration { $$ = criaNoSolitarioComFilhos(1, $1); }
;

global_var_declaration
    : TK_IDENTIFICADOR is_vector is_static declaration_type ';' { $$ = criaNoSolitarioComFilhos(4, $1, $2, $3, $4); }
;

/* BEGIN FUNCTION HEADER */
function_declaration
    : is_static declaration_type TK_IDENTIFICADOR list_of_parameters_declaration command_block { $$ = criaNoSolitarioComFilhos(5, $1, $2, $3, $4, $5); }
;

list_of_parameters_declaration
    : '(' parameters_declaration_list ')' { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | '(' ')' { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

parameters_declaration_list
    : parameter_declaration ',' parameters_declaration_list { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | parameter_declaration { $$ = criaNoSolitarioComFilhos(1, $1); }
;

parameter_declaration
    : is_const declaration_type TK_IDENTIFICADOR { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
;

/* END FUNCTION HEADER */

command_block
    : '{' list_of_commands '}' { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
;

list_of_commands
    : list_of_commands valid_command ';'  { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | %empty
;

// command_sentence
//     :  { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
// ;

valid_command
    : local_var_declaration { $$ = $1; }
    | assignment_command { $$ = criaNo($1); }
    | command_block { $$ = criaNo($1); }
    | input_command { $$ = criaNo($1); }
    | output_command { $$ = criaNo($1); }
    | function_call_command { $$ = criaNo($1); }
    | shift_command { $$ = criaNo($1); }
    | break_flow_command { $$ = criaNo($1); }
    | if_then_else_command { $$ = criaNo($1); }
    | for_command { $$ = criaNo($1); }
    | while_command { $$ = criaNo($1); }
;

/* BEGIN LOCAL VAR */
local_var_declaration
    : local_var_attribute declaration_type TK_IDENTIFICADOR is_local_var_init { $$ = criaNoSolitarioComFilhos(4, $1, $2, $3, $4); }
;

//local_var_attribute: TK_PR_STATIC is_const | %empty;

local_var_attribute
    : is_static TK_PR_CONST { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | TK_PR_STATIC { $$ = criaNoSolitarioComFilhos(1, $1); }
    | %empty
;

is_local_var_init
    : local_var_init { $$ = criaNoSolitarioComFilhos(1, $1); }
    | %empty
;

local_var_init
    : TK_OC_LE local_var_init_valid_values { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

local_var_init_valid_values
    : literal_values { $$ = criaNoSolitarioComFilhos(1, $1); }
    | TK_IDENTIFICADOR { $$ = criaNoSolitarioComFilhos(1, $1); }
;
/* END LOCAL VAR */

/* BEGIN ASSIGNMENT COMMAND */

assignment_command
    : TK_IDENTIFICADOR is_vector '=' expression { $$ = criaNoSolitarioComFilhos(4, $1, $2, $3, $4); }
;

/* END ASSIGNMENT COMMAND*/

/* BEGIN I/O COMMAND */

input_command
    : TK_PR_INPUT expression { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

output_command
    : TK_PR_OUTPUT parameters_list { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

/* END I/O COMMAND */

/* BEGIN FUNCTION CALL COMMAND */

function_call_command
    : TK_IDENTIFICADOR function_call_parameters_command { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

function_call_parameters_command
    : '(' parameters_list ')' { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | '(' ')' { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
;

/* END FUNCTION CALL COMMAND */

/* BEGIN SHIFT LEFT AND RIGHT COMMAND */

shift_command
    : TK_IDENTIFICADOR is_vector shift_operator expression { $$ = criaNoSolitarioComFilhos(4, $1, $2, $3, $4); }
;

shift_operator
    : TK_OC_SL { $$ = criaNoSolitarioComFilhos(1, $1); }
    | TK_OC_SR { $$ = criaNoSolitarioComFilhos(1, $1); }
;

/* END SHIFT LEFT AND RIGHT COMMAND */

/* BEGIN RETURN, BREAK, CONTINUE COMMAND */

break_flow_command
    : break_flow_valid_commands { $$ = criaNoSolitarioComFilhos(1, $1); }
;

break_flow_valid_commands
    : TK_PR_RETURN expression { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | TK_PR_BREAK { $$ = criaNoSolitarioComFilhos(1, $1); }
    | TK_PR_CONTINUE { $$ = criaNoSolitarioComFilhos(1, $1); }
;

/* END RETURN, BREAK, CONTINUE COMMAND */

/* BEGIN FLOW CONTROL COMMAND */

// IF STATEMENT
if_then_else_command
    : if_then_only_command { $$ = criaNoSolitarioComFilhos(1, $1); }
    | if_then_else_too_command { $$ = criaNoSolitarioComFilhos(1, $1); }
;

if_then_only_command
    : TK_PR_IF '(' expression ')' TK_PR_THEN command_block {  $$ = criaNoComFilhos($1, 2, criaNoSolitarioComFilhos(3, $2, $3, $4), criaNoComFilhos($5, 1, $6)); }
;

if_then_else_too_command
    : TK_PR_IF '(' expression ')' TK_PR_THEN command_block TK_PR_ELSE command_block {  $$ = criaNoComFilhos($1, 3, criaNoSolitarioComFilhos(3, $2, $3, $4), criaNoComFilhos($5, 1, $6), criaNoComFilhos($7, 1, $8)); }
;

// FOR LOOP

for_command
    : TK_PR_FOR '(' for_list ':' expression ':' for_list ')' command_block {  $$ = criaNoComFilhos($1, 8, $2, $3, $4, $5, $6, $7, $8, $9); }
;

for_list
    : for_list_parameter ',' for_list {  $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | for_list_parameter {  $$ = criaNoSolitarioComFilhos(1, $1); }
;

for_list_parameter
    : local_var_declaration {  $$ = criaNoSolitarioComFilhos(1, $1); }
    | assignment_command {  $$ = criaNoSolitarioComFilhos(1, $1); }
    | shift_command {  $$ = criaNoSolitarioComFilhos(1, $1); }
;

// WHILE LOOP

while_command
    : TK_PR_WHILE '(' expression ')' TK_PR_DO command_block {  $$ = criaNoComFilhos($1, 5, $1, $2, $3, $4, $5); }
;

/* END FLOW CONTROL COMMAND */

parameters_list
    : parameter ',' parameters_list {  $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | parameter {  $$ = criaNoSolitarioComFilhos(1, $1); }
;

parameter
    : expression {  $$ = criaNoComFilhos($1, 0); }
    | TK_LIT_CHAR {  $$ = criaNoLiteral($1); }
    | TK_LIT_STRING {  $$ = criaNoLiteral($1); }
;

is_const
    : TK_PR_CONST {  $$ = criaNoComFilhos($1, 0); }
    | %empty
;

is_vector
    : '[' expression ']' { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | %empty
;

is_static
    : TK_PR_STATIC { $$ = criaNoSolitarioComFilhos(1, $1); }
    | %empty
;

declaration_type
    : TK_PR_INT { $$ = criaNoComFilhos($1, 0); }
    | TK_PR_FLOAT { $$ = criaNoComFilhos($1, 0); } 
    | TK_PR_BOOL { $$ = criaNoComFilhos($1, 0); } 
    | TK_PR_CHAR { $$ = criaNoComFilhos($1, 0); } 
    | TK_PR_STRING { $$ = criaNoComFilhos($1, 0); } 
;

literal_values
    : TK_LIT_INT { $$ = criaNoLiteral($1); }
    | TK_LIT_FLOAT { $$ = criaNoLiteral($1); }
    | TK_LIT_TRUE { $$ = criaNoLiteral($1); }
    | TK_LIT_FALSE { $$ = criaNoLiteral($1); }
    | TK_LIT_CHAR { $$ = criaNoLiteral($1); }
    | TK_LIT_STRING { $$ = criaNoLiteral($1); }
;

expression
    : get_table_value { $$ = criaNoComFilhos($1, 0); } 
    | get_reference_address { $$ = criaNoComFilhos($1, 0); } 
    | reference_access_value { $$ = criaNoComFilhos($1, 0); } 
    | TK_IDENTIFICADOR is_vector { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | TK_LIT_INT { $$ = criaNoLiteral($1); }
    | TK_LIT_FLOAT { $$ = criaNoLiteral($1); }
    | TK_LIT_FALSE { $$ = criaNoLiteral($1); }
    | TK_LIT_TRUE { $$ = criaNoLiteral($1); }
    | function_call_command { $$ = criaNoComFilhos($1, 0); } 
;

expression
    : '(' expression ')' { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); } 
;

expression
    : expression '+' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '-' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); } 
    | expression '/' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '*' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '%' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | '+' expression { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | '-' expression { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | '!' expression { $$ = criaNoSolitarioComFilhos(2, $1, $2); }
    | expression '|' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); } 
    | expression '&' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '^' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '<' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '>' expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_LE expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_GE expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_EQ expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_NE expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_AND expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression TK_OC_OR expression { $$ = criaNoSolitarioComFilhos(3, $1, $2, $3); }
    | expression '?' expression ':' expression { $$ = criaNoSolitarioComFilhos(5, $1, $2, $3, $4, $5); }
;

reference_access_value
    : '*' TK_IDENTIFICADOR { $$ = criaNoComFilhos($1, 0); } 
;

get_reference_address
    : '&' TK_IDENTIFICADOR { $$ = criaNoComFilhos($1, 0); } 
;

get_table_value
    : '#' TK_IDENTIFICADOR { $$ = criaNoComFilhos($1, 0); } 
;

%%

void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}


