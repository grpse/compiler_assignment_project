CC=gcc

all: generate_lex compile_lex_with_main	

generate_lex:
	flex scanner.l

compile_lex_with_main:
	gcc main.c lex.yy.c -o etapa1

tar: all	
	tar cvzf etapa1.tgz scanner.l main.c tokens.h etapa1 Makefile