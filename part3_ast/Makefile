CC=gcc

all: generate_sintatical_and_gen_ast generate_lexical compile

generate_sintatical_and_gen_ast:
	bison -d parser.y

generate_lexical:
	flex -o scanner.lex.c scanner.l

compile:
	gcc -o etapa3 scanner.lex.c parser.tab.c estrutura_de_dados.c main.c -lm -lfl

tar: all
	tar cvzf etapa3.tgz scanner.l parser.y etapa3 Makefile main.c tipos_de_token.h valor_lexico.h estrutura_de_dados.c