CC=gcc

all: generate_sintatical generate_lexical compile

generate_sintatical:
	bison -d parser.y

generate_lexical:
	flex -o scanner.lex.c scanner.l

compile:
	gcc -o etapa2 scanner.lex.c parser.tab.c main.c -lm -lfl

tar: all
	tar cvzf etapa2.tgz scanner.l parser.y etapa2 Makefile main.c