CC=gcc

all: generate_sintatical_and_gen_ast generate_lexical compile

generate_sintatical_and_gen_ast:
	bison -d parser.y

generate_lexical:
	flex -o scanner.lex.c scanner.l

compile:
	g++ -g -std=c++11 -o etapa4 parser.tab.c utils.cpp scanner.lex.c main.c -lm -lfl

tar: all
	tar cvzf etapa4.tgz scanner.l parser.y etapa4 Makefile main.c Node.hh SymbolTable.hh utils.cpp LexicalValue.h TypesInclude.hh