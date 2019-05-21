#include "TypesInclude.hh"

void descompila(void* arvore) {
    if (arvore) {
        Node* root = (Node*) arvore;
        root->print();
    }
}

void libera(void* arvore) {
    if (arvore) {
        Node* root = (Node*) arvore;
        delete root;
    }
}

// void imprimeValorLexico(struct valor_lexico_t vt) {

//     if (vt.tipo_do_token != TOKEN_SEM_TIPO) {
//         switch(vt.tipo_do_literal) {
//             case NAO_LITERAL: {
//                 printf(" %s ", vt.valor_do_token.s);
//                 break;
//             }

//             case LITERAL_INT: {
//                 printf(" %d ", vt.valor_do_token.i);
//                 break;
//             }

//             case LITERAL_FLOAT: {
//                 printf(" %f ", vt.valor_do_token.f);
//                 break;
//             }

//             case LITERAL_BOOL: {
//                 printf(" %s ", vt.valor_do_token.b ? "true" : "false");
//                 break;
//             }

//             case LITERAL_CHAR: {
//                 printf(" %c ", vt.valor_do_token.c);
//                 break;
//             }

//             case LITERAL_STRING: {
//                 printf(" %s ", vt.valor_do_token.s);
//                 break;
//             }

//         }
//     }

// }