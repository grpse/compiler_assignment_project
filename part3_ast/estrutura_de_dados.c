#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"
#include "tipos_de_token.h"
#include "valor_lexico.h"
#include "stdarg.h"
#include <string.h>
#define TRUE 1
#define FALSE 0

#define DEF_TO_STRING(to_print) #to_print

struct Pilha criaPilha();
void empilha(struct Pilha* pilha, struct No* no);
struct No* desempilha(struct Pilha* pilha);
struct No criaNo(struct No no);
struct No criaNoComFilhos(struct No ancestral, int numero_de_filhos, ...);
struct No criaNoSolitarioComFilhos(int numero_de_filhos, ...);
struct No* copiaNo(struct No no);
struct No criaNoLiteral(struct No no);

void imprimeValorLexico(struct valor_lexico_t vt);
void imprimeNo(struct No* no);
void imprimeTipoDeToken(struct valor_lexico_t vt);

struct No criaNoComFilhos(struct No ancestral, int numero_de_filhos, ...) {
    ancestral.numero_de_filhos = numero_de_filhos;
    ancestral.filhos = numero_de_filhos > 0 ? malloc(sizeof(struct No*) * numero_de_filhos) : NULL;


    va_list argp;
    va_start(argp, numero_de_filhos);

    for (int i = 0; i < numero_de_filhos; i++) {
        struct No filho = va_arg(argp, struct No);
        struct No* filhoPtr = malloc(sizeof(struct No));

        // Point to right child
        memcpy(filhoPtr, &filho, sizeof(struct No));
        ancestral.filhos[i] = filhoPtr;
    }

    va_end(argp);

    return ancestral;
}

struct No criaNoSolitarioComFilhos(int numero_de_filhos, ...) {
    struct No ancestral;
    ancestral.ancestral = NULL;
    ancestral.numero_de_filhos = numero_de_filhos;
    ancestral.filhos = numero_de_filhos > 0 ? malloc(sizeof(struct No*) * numero_de_filhos) : NULL;
    ancestral.valor_lexico.tipo_do_token = TOKEN_SEM_TIPO;

    va_list argp;
    va_start(argp, numero_de_filhos);
    for (int i = 0; i < numero_de_filhos; i++) {
        struct No filho = va_arg(argp, struct No);
        struct No* filhoPtr = malloc(sizeof(struct No));

        // Point to child
        memcpy(filhoPtr, &filho, sizeof(struct No));
        ancestral.filhos[i] = filhoPtr;
    }

    va_end(argp);

    return ancestral;
}

struct No* copiaNo(struct No no) {
    struct No* copia = malloc(sizeof(struct No));
    memcpy(copia, &no, sizeof(struct No));
    return copia;
}

struct No criaNo(struct No no) {
    no.ancestral = NULL;
    no.filhos = no.numero_de_filhos > 0 ? no.filhos : NULL;
    return no;
}

struct No criaNoLiteral(struct No no) {
    no.filhos = NULL;
    no.numero_de_filhos = 0;
    no.ancestral = NULL;

    return no;
}

struct No criaNoVazio(struct No no) {
    no.filhos = NULL;
    no.numero_de_filhos = 0;
    no.ancestral = NULL;
    no.valor_lexico.tipo_do_token = TOKEN_SEM_TIPO;

    return no;
}

void descompila(void* arvore) {
    struct No* no = (struct No*) arvore;
    // printf("%d\n", no == NULL);
    // imprimeValorLexico(no->valor_lexico);
    // imprimeTipoDeToken(no->valor_lexico);
    struct Pilha pilha = criaPilha();
    empilha(&pilha, no);

    imprimeNo(no);
 
    while(pilha.tamanho != 0) {
        struct No* no = desempilha(&pilha);

        for (int i = no->numero_de_filhos - 1; i >= 0; i--) {
            empilha(&pilha, no->filhos[i]);
        }
        
        // printf("\n");

        // printf("b\n");
        
        // printf("e b\n");
        // imprimeValorLexico(no->valor_lexico);
    }
    
} 

void libera(void* arvore) {

}


struct Pilha criaPilha() {
    struct Pilha pilha;
    pilha.tamanho = 0;
    pilha.tamanho_reservado = 64;
    pilha.conteudo = malloc(sizeof(struct No*) * pilha.tamanho_reservado);
    return pilha;
}

void empilha(struct Pilha* pilha, struct No* no) {
    
    if (pilha->tamanho + 1 < pilha->tamanho_reservado) {
        int novo_tamanho = pilha->tamanho_reservado * 2;
        pilha->conteudo = realloc(pilha->conteudo, sizeof(struct No*) * novo_tamanho);
        pilha->tamanho_reservado = novo_tamanho;
    }

    pilha->conteudo[pilha->tamanho] = no;
    pilha->tamanho++;
}

struct No* desempilha(struct Pilha* pilha) {
    struct No* no = pilha->conteudo[pilha->tamanho - 1];
    pilha->tamanho--;
    return no;
}

void imprimeNo(struct No* no) {

    for (int i = 0; i < no->numero_de_filhos; i++) {
        imprimeNo(no->filhos[i]);
    }

    struct valor_lexico_t vt = no->valor_lexico;
    imprimeValorLexico(vt); printf(" ");
    imprimeTipoDeToken(vt);
    printf("\n");
}

void imprimeValorLexico(struct valor_lexico_t vt) {

    if (vt.tipo_do_token != TOKEN_SEM_TIPO) {
        switch(vt.tipo_do_literal) {
            case NAO_LITERAL: {
                printf(" %s ", vt.valor_do_token.s);
                break;
            }

            case LITERAL_INT: {
                printf(" %d ", vt.valor_do_token.i);
                break;
            }

            case LITERAL_FLOAT: {
                printf(" %f ", vt.valor_do_token.f);
                break;
            }

            case LITERAL_BOOL: {
                printf(" %s ", vt.valor_do_token.b ? "true" : "false");
                break;
            }

            case LITERAL_CHAR: {
                printf(" %c ", vt.valor_do_token.c);
                break;
            }

            case LITERAL_STRING: {
                printf(" %s ", vt.valor_do_token.s);
                break;
            }

        }
    }

}

void imprimeTipoDeToken(struct valor_lexico_t vt) {
    switch(vt.tipo_do_token) {
        case PALAVRA_RESERVADA: printf("%s", DEF_TO_STRING(PALAVRA_RESERVADA)); return;
        case CARACTERES_ESPECIAIS: printf("%s", DEF_TO_STRING(CARACTERES_ESPECIAIS)); return;
        case OPERADORES_COMPOSTOS: printf("%s", DEF_TO_STRING(OPERADORES_COMPOSTOS)); return;
        case IDENTIFICADORES: printf("%s", DEF_TO_STRING(IDENTIFICADORES)); return;
        case LITERAIS: printf("%s", DEF_TO_STRING(LITERAIS)); return;
        default: printf("DESCONHECIDO");
    }
}