#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"


extern char* yytext;
extern union YYSTYPE yyval;

struct No {
    int numero_de_filhos;
    struct No* ancestral;
    struct No** filhos;

    struct {
        int numero_da_linha;
        int tipo_do_token;
        union {
            float f;
            int i;
            int b;
            char c;
            char* s;
        } valor_do_token;
    } valor_lexico;
};

struct No* criaNo();
void adicionaFilho(struct No* ancestral, struct No* filho);
struct No* removeNo();
struct No* alteraNo();
void imprimeEmProfundidade(struct No* no);

struct No* criaNo() {
    struct No* no = malloc(sizeof(struct No));

    no->numero_de_filhos = 0;
    no->ancestral = NULL;
    no->filhos = NULL;    
    no->valor_lexico.numero_da_linha = yylval.valor_lexico.numero_da_linha;
    no->valor_lexico.tipo_do_token = yylval.valor_lexico.tipo_do_token;
    no->valor_lexico.valor_do_token.i = yylval.valor_lexico.valor_do_token.i;
    no->valor_lexico.valor_do_token.f = yylval.valor_lexico.valor_do_token.f;
    no->valor_lexico.valor_do_token.b = yylval.valor_lexico.valor_do_token.b;
    no->valor_lexico.valor_do_token.c = yylval.valor_lexico.valor_do_token.c;
    no->valor_lexico.valor_do_token.s = yylval.valor_lexico.valor_do_token.s;
    return no;
}

void adicionaFilho(struct No* ancestral, struct No* filho) {
    filho->ancestral = ancestral;
    ancestral->filhos[ancestral->numero_de_filhos] = filho;
    ancestral->numero_de_filhos++;
}

void descompila(void* arvore) {

} 

void libera(void* arvore) {

}