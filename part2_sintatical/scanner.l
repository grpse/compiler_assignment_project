%option noyywrap
%{
    #include <stdio.h>
    #include "parser.tab.h"

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

%%

{NEW_LINE} { line_count++; }
{SPACE} { ; }

{PR_INT} { return TK_PR_INT; }
{PR_FLOAT} { return TK_PR_FLOAT; }
{PR_BOOL} { return TK_PR_BOOL; }
{PR_CHAR} { return TK_PR_CHAR; }
{PR_STRING} { return TK_PR_STRING; }

{PR_IF} { return TK_PR_IF; }
{PR_THEN} { return TK_PR_THEN; }
{PR_ELSE} { return TK_PR_ELSE; }
{PR_WHILE} { return TK_PR_WHILE; }
{PR_DO} { return TK_PR_DO; }
{PR_INPUT} { return TK_PR_INPUT; }
{PR_OUTPUT} { return TK_PR_OUTPUT; }
{PR_RETURN} { return TK_PR_RETURN; }
{PR_CONST} { return TK_PR_CONST; }
{PR_STATIC} { return TK_PR_STATIC; }
{PR_FOREACH} { return TK_PR_FOREACH; }
{PR_FOR} { return TK_PR_FOR; }
{PR_SWITCH} { return TK_PR_SWITCH; }
{PR_CASE} { return TK_PR_CASE; }
{PR_BREAK} { return TK_PR_BREAK; }
{PR_CONTINUE} { return TK_PR_CONTINUE; }
{PR_CLASS} { return TK_PR_CLASS; }
{PR_PRIVATE} { return TK_PR_PRIVATE; }
{PR_PUBLIC} { return TK_PR_PUBLIC; }
{PR_PROTECTED} { return TK_PR_PROTECTED; }
{OC_LE} { return TK_OC_LE; }
{OC_GE} { return TK_OC_GE; }
{OC_EQ} { return TK_OC_EQ; }
{OC_NE} { return TK_OC_NE; }
{OC_AND} { return TK_OC_AND; }
{OC_OR} { return TK_OC_OR; }
{OC_SL} { return TK_OC_SL; }
{OC_SR} { return TK_OC_SR; }
{OC_FORWARD_PIPE} { return TK_OC_FORWARD_PIPE; }
{OC_BASH_PIPE} { return TK_OC_BASH_PIPE; }

{LIT_TRUE} { return TK_LIT_TRUE; }
{LIT_FALSE} { return TK_LIT_FALSE; }

{IDENTIFIER} { return TK_IDENTIFICADOR; }


{LIT_INT} { return TK_LIT_INT; }
{LIT_FLOAT} { return TK_LIT_FLOAT; }
{LIT_CHAR} { return TK_LIT_CHAR; }
{LIT_STRING} { return TK_LIT_STRING; }
{MARKER} { return yytext[0]; }

%%