%option noyywrap
%{
#include <stdio.h>
#include "valor_lexico.h"
#define YYSTYPE struct No
#include "parser.tab.h"
#include "tipos_de_token.h"

int line_count = 1;

int get_line_number() {
	return line_count;
}

%}

NEW_LINE \n
OPEN_SQUARE_BRACKETS [
CLOSE_SQUARE_BRACKETS ]
OPEN_CURLY_BRACES {
CLOSE_CURLY_BRACES }
OPEN_PARENTHESES (
CLOSE_PARENTHESES )
PLUS +
MINUS -
REMAINDER %
NEGATION !
EXPONENTIAL ^
AMPERSAND &
ASTERISC *
QUESTION_MARK ?
HASH_MARK #

PR_INT int
PR_FLOAT float
PR_BOOL bool
PR_CHAR char
PR_STRING string
PR_IF if
PR_THEN then
PR_ELSE else
PR_WHILE while
PR_DO do
PR_INPUT input
PR_OUTPUT output
PR_RETURN return
PR_CONST const
PR_STATIC static
PR_FOREACH foreach
PR_FOR for
PR_SWITCH switch
PR_CASE case
PR_BREAK break
PR_CONTINUE continue
PR_CLASS class
PR_PRIVATE private
PR_PUBLIC public
PR_PROTECTED protected
OC_LE "<""="
OC_GE ">""="
OC_EQ "=""="
OC_NE "!""="
OC_AND "&""&"
OC_OR "|""|"
OC_SL ">"">"
OC_SR "<""<"
OC_FORWARD_PIPE "%"">""%"
OC_BASH_PIPE "%""|""%"

ID_WORD [_a-zA-Z]
NUMBER [0-9]
EXPOENT (E|e)("+"|"-"){NUMBER}+

IDENTIFIER {ID_WORD}+({NUMBER}|{ID_WORD})*

MARKER (","|";"|":"|"("|")"|"["|"]"|"{"|"}"|"+"|"-"|"|"|"?"|"*"|"/"|"<"|">"|"="|"!"|"&"|"%"|"#"|"^"|"."|"$")
ESCAPED_DELIMITER "\\"("\\"|"'"|"\"")
SOME_DIACRITICS [ÁáÂâÀàÅåÃãÄäÆæÉéÊêÈèËëÐðÍíÎîÌìÏïÓóÔôÒòØøÕõÖöÚúÛûÙùÜüÇçÑñ®©ÝýÞþß]
SPACE " "

TEXT_CHAR ({ESCAPED_DELIMITER}|{MARKER}|{ID_WORD}|{NUMBER}|{SOME_DIACRITICS}|{SPACE})
TEXT {TEXT_CHAR}*

LIT_INT {NUMBER}+
LIT_FLOAT {NUMBER}+("."{NUMBER}+)?{EXPOENT}?
LIT_TRUE true
LIT_FALSE false


LIT_CHAR "'"{TEXT_CHAR}"'"
LIT_STRING "\""{TEXT}"\""

COMMENT_MULTILINE "/""*"(.|{NEW_LINE})*"*""/"
COMMENT_LINE "/""/".*({NEW_LINE}|%eof)

%%

{COMMENT_MULTILINE} { ; }
{COMMENT_LINE} { ; }

{NEW_LINE} { line_count++; }
{SPACE} { ; }

{PR_INT} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_INT;
}
{PR_FLOAT} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_FLOAT;
}
{PR_BOOL} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_BOOL;
}
{PR_CHAR} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_CHAR;
}
{PR_STRING} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_STRING;
}

{PR_IF} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_IF;
}
{PR_THEN} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_THEN;
}
{PR_ELSE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_ELSE;
}
{PR_WHILE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_WHILE;
}
{PR_DO} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_DO;
}
{PR_INPUT} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_INPUT;
}
{PR_OUTPUT} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_OUTPUT;
}
{PR_RETURN} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_RETURN;
}
{PR_CONST} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_CONST;
}
{PR_STATIC} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_STATIC;
}
{PR_FOREACH} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_FOREACH;
}
{PR_FOR} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_FOR;
}
{PR_SWITCH} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_SWITCH;
}
{PR_CASE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_CASE;
}
{PR_BREAK} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_BREAK;
}
{PR_CONTINUE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_CONTINUE;
}
{PR_CLASS} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_CLASS;
}
{PR_PRIVATE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_PRIVATE;
}
{PR_PUBLIC} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_PUBLIC;
}
{PR_PROTECTED} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  PALAVRA_RESERVADA;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_PR_PROTECTED;
}
{OC_LE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_LE;
}
{OC_GE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_GE;
}
{OC_EQ} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_EQ;
}
{OC_NE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	return  TK_OC_NE;
}
{OC_AND} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_AND;
}
{OC_OR} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_OR;
}
{OC_SL} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_SL;
}
{OC_SR} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_SR;
}
{OC_FORWARD_PIPE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_FORWARD_PIPE;
}
{OC_BASH_PIPE} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  OPERADORES_COMPOSTOS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_OC_BASH_PIPE;
}

{LIT_TRUE} {
	yylval.valor_lexico.valor_do_token.b = 1;
	yylval.valor_lexico.tipo_do_token =  LITERAIS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = LITERAL_BOOL;
	return  TK_LIT_TRUE;
}
{LIT_FALSE} {
	yylval.valor_lexico.valor_do_token.b = 0;
	yylval.valor_lexico.tipo_do_token =  LITERAIS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = LITERAL_BOOL;
	return  TK_LIT_FALSE;
}

{IDENTIFIER} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token =  IDENTIFICADORES;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  TK_IDENTIFICADOR;
}


{LIT_INT} { 
    yylval.valor_lexico.valor_do_token.i = atoi(yytext);
    yylval.valor_lexico.tipo_do_token = LITERAIS;
    yylval.valor_lexico.numero_da_linha = line_count;
    yylval.valor_lexico.tipo_do_literal = LITERAL_INT;
	return TK_LIT_INT; 
}
{LIT_FLOAT} { 
    yylval.valor_lexico.valor_do_token.f = atof(yytext);
    yylval.valor_lexico.tipo_do_token = LITERAIS;
    yylval.valor_lexico.numero_da_linha = line_count;
    yylval.valor_lexico.tipo_do_literal = LITERAL_FLOAT;
	return TK_LIT_FLOAT; 
}
{LIT_CHAR} { 
    yylval.valor_lexico.valor_do_token.c = yytext[0];
    yylval.valor_lexico.tipo_do_token = LITERAIS;
    yylval.valor_lexico.numero_da_linha = line_count;
    yylval.valor_lexico.tipo_do_literal = LITERAL_CHAR;
	return TK_LIT_CHAR; 
}
{LIT_STRING} { 
    yylval.valor_lexico.valor_do_token.s = strdup(yytext);
    yylval.valor_lexico.tipo_do_token = LITERAIS;
    yylval.valor_lexico.numero_da_linha = line_count;
    yylval.valor_lexico.tipo_do_literal = LITERAL_STRING;
	return TK_LIT_STRING; 
}
{MARKER} {
	yylval.valor_lexico.valor_do_token.s = strdup(yytext);
	yylval.valor_lexico.tipo_do_token = CARACTERES_ESPECIAIS;
	yylval.valor_lexico.numero_da_linha = line_count;
	yylval.valor_lexico.tipo_do_literal = NAO_LITERAL;
	return  yytext[0];
}

%%
