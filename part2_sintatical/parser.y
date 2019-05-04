%{

#include <stdio.h>

extern char* yytext;
extern int get_line_number();

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

%token NEW_LINE

%start programa

%left '-' '+'
%left '*' '/' '%' '|'
%left '!' '<' '>' TK_OC_LE TK_OC_GE TK_OC_EQ TK_OC_NE TK_OC_AND TK_OC_OR
%left '?' ':'
%right '^' '&' '#' 

%%

programa: declarations | %empty;

declarations: declarations global_var_declaration | declarations function_declaration | global_var_declaration | function_declaration;

global_var_declaration: TK_IDENTIFICADOR is_vector is_static declaration_type ';';

/* BEGIN FUNCTION HEADER */
function_declaration: is_static declaration_type TK_IDENTIFICADOR list_of_parameters_declaration command_block;

list_of_parameters_declaration: '(' parameters_declaration_list ')' | '(' ')';

parameters_declaration_list: parameter_declaration ',' parameters_declaration_list | parameter_declaration;

parameter_declaration: is_const declaration_type TK_IDENTIFICADOR;

/* END FUNCTION HEADER */

command_block: '{' list_of_commands '}';

list_of_commands: list_of_commands valid_command is_semicolon |  %empty;

valid_command: local_var_declaration | assignment_command | command_block | input_command | output_command | function_call_command | shift_command | break_flow_command | if_then_else_command | for_command |  while_command;

/* BEGIN LOCAL VAR */
local_var_declaration: local_var_attribute declaration_type TK_IDENTIFICADOR is_local_var_init;

//local_var_attribute: TK_PR_STATIC is_const | %empty;

local_var_attribute: is_static TK_PR_CONST| TK_PR_STATIC | %empty;

is_local_var_init: local_var_init | %empty;

local_var_init: TK_OC_LE local_var_init_valid_values;

local_var_init_valid_values: literal_values | TK_IDENTIFICADOR;
/* END LOCAL VAR */

/* BEGIN ASSIGNMENT COMMAND */

assignment_command: TK_IDENTIFICADOR is_vector '=' expression;

/* END ASSIGNMENT COMMAND*/

/* BEGIN I/O COMMAND */

input_command: TK_PR_INPUT expression;
output_command: TK_PR_OUTPUT parameters_list;

/* END I/O COMMAND */

/* BEGIN FUNCTION CALL COMMAND */

function_call_command: TK_IDENTIFICADOR function_call_parameters_command;

function_call_parameters_command: '(' parameters_list ')' | '(' ')';

/* END FUNCTION CALL COMMAND */

/* BEGIN SHIFT LEFT AND RIGHT COMMAND */

shift_command: TK_IDENTIFICADOR is_vector shift_operator expression;

shift_operator: TK_OC_SL | TK_OC_SR;

/* END SHIFT LEFT AND RIGHT COMMAND */

/* BEGIN RETURN, BREAK, CONTINUE COMMAND */

break_flow_command: break_flow_valid_commands;

break_flow_valid_commands: TK_PR_RETURN expression | TK_PR_BREAK | TK_PR_CONTINUE;

/* END RETURN, BREAK, CONTINUE COMMAND */

/* BEGIN FLOW CONTROL COMMAND */

// IF STATEMENT
if_then_else_command: if_then_only_command | if_then_else_too_command;

if_then_only_command: TK_PR_IF '(' expression ')' TK_PR_THEN command_block;

if_then_else_too_command: TK_PR_IF '(' expression ')' TK_PR_THEN command_block TK_PR_ELSE command_block;

// FOR LOOP

for_command: TK_PR_FOR '(' for_list ':' expression ':' for_list ')' command_block;

for_list: for_list_parameter ',' for_list | for_list_parameter;

for_list_parameter: local_var_declaration | assignment_command | shift_command;

// WHILE LOOP

while_command: TK_PR_WHILE '(' expression ')' TK_PR_DO command_block;

/* END FLOW CONTROL COMMAND */

parameters_list: parameter ',' parameters_list | parameter;

parameter: expression | TK_LIT_CHAR | TK_LIT_STRING;

is_semicolon: ';';

is_const: TK_PR_CONST | %empty;

is_vector: '[' expression ']' | %empty;

is_static: TK_PR_STATIC | %empty;

declaration_type: TK_PR_INT | TK_PR_FLOAT | TK_PR_BOOL | TK_PR_CHAR | TK_PR_STRING;

literal_values: TK_LIT_INT | TK_LIT_FLOAT | TK_LIT_TRUE | TK_LIT_FALSE | TK_LIT_CHAR | TK_LIT_STRING;

expression: get_table_value | get_reference_address | reference_access_value | TK_IDENTIFICADOR is_vector | TK_LIT_INT | TK_LIT_FLOAT | TK_LIT_FALSE | TK_LIT_TRUE | function_call_command;
expression: '(' expression ')';
expression: expression '+' expression;
expression: expression '-' expression;
expression: expression '/' expression;
expression: expression '*' expression;
expression: expression '%' expression;
expression: '+' expression;
expression: '-' expression;
expression: '!' expression;
expression: expression '|' expression;
expression: expression '&' expression;
expression: expression '^' expression;
expression: expression '<' expression;
expression: expression '>' expression;

expression: expression TK_OC_LE expression;
expression: expression TK_OC_GE expression;
expression: expression TK_OC_EQ expression;
expression: expression TK_OC_NE expression;
expression: expression TK_OC_AND expression;
expression: expression TK_OC_OR expression;
expression: expression '?' expression ':' expression;

reference_access_value: '*' TK_IDENTIFICADOR;
get_reference_address: '&' TK_IDENTIFICADOR;
get_table_value: '#' TK_IDENTIFICADOR;

%%

void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}
