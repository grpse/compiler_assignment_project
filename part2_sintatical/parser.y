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


%%

programa: declarations | %empty;

declarations: declarations global_var_declaration | global_var_declaration | declarations function_declaration;

global_var_declaration: TK_IDENTIFICADOR is_vector is_static declaration_type ';';

function_declaration: is_static declaration_type TK_IDENTIFICADOR list_of_parameters command_block;

list_of_parameters: '(' parameters_list ')' | '(' ')';

parameters_list: parameter ',' parameters_list | parameter;

parameter: is_const declaration_type TK_IDENTIFICADOR;

command_block: %empty;

is_const: TK_PR_CONST | %empty;

is_vector: '[' TK_LIT_INT ']' | %empty;

is_static: TK_PR_STATIC | %empty;

declaration_type: TK_PR_INT | TK_PR_FLOAT | TK_PR_BOOL | TK_PR_CHAR | TK_PR_STRING;

%%

void yyerror (char const *s) {
    printf("ERROR =>> Line %d: %s, Last token: %s\n", get_line_number(), s, yytext);
}