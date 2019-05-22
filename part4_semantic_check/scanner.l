%option noyywrap
%{
	
#include "TypesInclude.hh"
#include "parser.tab.h"

int line_count = 1;

int get_line_number() {
	return line_count;
}

extern char* copyString(char* toCopy);
extern char* copyStringSliceOnly(char* toCopy);

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
COMMENT_LINE "/""/".*({NEW_LINE}|%eof)?

%%

{COMMENT_MULTILINE} { ; }
{COMMENT_LINE} { ; }

{NEW_LINE} { line_count++; }
{SPACE} { ; }

{PR_INT} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_INT;
}
{PR_FLOAT} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_FLOAT;
}
{PR_BOOL} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_BOOL;
}
{PR_CHAR} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_CHAR;
}
{PR_STRING} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_STRING;
}

{PR_IF} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_IF;
}
{PR_THEN} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_THEN;
}
{PR_ELSE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_ELSE;
}
{PR_WHILE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_WHILE;
}
{PR_DO} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_DO;
}
{PR_INPUT} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_INPUT;
}
{PR_OUTPUT} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_OUTPUT;
}
{PR_RETURN} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_RETURN;
}
{PR_CONST} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_CONST;
}
{PR_STATIC} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_STATIC;
}
{PR_FOREACH} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_FOREACH;
}
{PR_FOR} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_FOR;
}
{PR_SWITCH} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_SWITCH;
}
{PR_CASE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_CASE;
}
{PR_BREAK} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_BREAK;
}
{PR_CONTINUE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_CONTINUE;
}
{PR_CLASS} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_CLASS;
}
{PR_PRIVATE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_PRIVATE;
}
{PR_PUBLIC} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_PUBLIC;
}
{PR_PROTECTED} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  RESERVED_WORD;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_PR_PROTECTED;
}
{OC_LE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_LE;
}
{OC_GE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_GE;
}
{OC_EQ} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_EQ;
}
{OC_NE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	return  TK_OC_NE;
}
{OC_AND} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_AND;
}
{OC_OR} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_OR;
}
{OC_SL} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_SL;
}
{OC_SR} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_SR;
}
{OC_FORWARD_PIPE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_FORWARD_PIPE;
}
{OC_BASH_PIPE} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  COMPOSED_OPERATORS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_OC_BASH_PIPE;
}

{LIT_TRUE} {
	yylval.lexicalValue.tokenValue.b = 1;
	yylval.lexicalValue.tokenType =  LITERALS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = LITERAL_BOOL;
	return  TK_LIT_TRUE;
}
{LIT_FALSE} {
	yylval.lexicalValue.tokenValue.b = 0;
	yylval.lexicalValue.tokenType =  LITERALS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = LITERAL_BOOL;
	return  TK_LIT_FALSE;
}

{IDENTIFIER} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType =  IDENTIFIERS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  TK_IDENTIFICADOR;
}


{LIT_INT} { 
    yylval.lexicalValue.tokenValue.i = atoi(yytext);
    yylval.lexicalValue.tokenType = LITERALS;
    yylval.lexicalValue.lineNumber = line_count;
    yylval.lexicalValue.literalType = LITERAL_INT;
	return TK_LIT_INT; 
}
{LIT_FLOAT} { 
    yylval.lexicalValue.tokenValue.f = atof(yytext);
    yylval.lexicalValue.tokenType = LITERALS;
    yylval.lexicalValue.lineNumber = line_count;
    yylval.lexicalValue.literalType = LITERAL_FLOAT;
	return TK_LIT_FLOAT; 
}
{LIT_CHAR} { 
    yylval.lexicalValue.tokenValue.c = yytext[1];
    yylval.lexicalValue.tokenType = LITERALS;
    yylval.lexicalValue.lineNumber = line_count;
    yylval.lexicalValue.literalType = LITERAL_CHAR;
	return TK_LIT_CHAR; 
}
{LIT_STRING} { 
    yylval.lexicalValue.tokenValue.s = copyStringSliceOnly(yytext);
    yylval.lexicalValue.tokenType = LITERALS;
    yylval.lexicalValue.lineNumber = line_count;
    yylval.lexicalValue.literalType = LITERAL_STRING;
	return TK_LIT_STRING; 
}
{MARKER} {
	yylval.lexicalValue.tokenValue.s = copyString(yytext);
	yylval.lexicalValue.tokenType = SPECIAL_CHARACTERS;
	yylval.lexicalValue.lineNumber = line_count;
	yylval.lexicalValue.literalType = NOT_LITERAL;
	return  yytext[0];
}

%%
