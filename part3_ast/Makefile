CC=gcc

all: generate_sintatical_and_gen_ast generate_lexical compile

generate_sintatical_and_gen_ast:
	bison -d parser.y

generate_lexical:
	flex -o scanner.lex.c scanner.l

compile:
	gcc -c TypesInclude.hh -o TypesInclude.hh.gch
	g++ -std=c++11 -o etapa3 parser.tab.c utils.cpp scanner.lex.c main.c -lm -lfl

tar: all
	tar cvzf etapa3.tgz scanner.l parser.y etapa3 Makefile main.c Node.hh Node.cc utils.cpp LexicalValue.h