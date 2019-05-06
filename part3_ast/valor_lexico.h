#ifndef VALOR_LEXICO
#define VALOR_LEXICO

#define NAO_LITERAL 0
#define LITERAL_INT 1
#define LITERAL_FLOAT 2
#define LITERAL_BOOL 3
#define LITERAL_CHAR 4
#define LITERAL_STRING 5

struct valor_lexico_t {
    int numero_da_linha;
    int tipo_do_token;
    int tipo_do_literal;
    union {
        float f;
        int i;
        int b;
        char c;
        char* s;
    } valor_do_token;
};

struct No {
    int numero_de_filhos;
    struct No* ancestral;
    struct No** filhos;
    struct valor_lexico_t valor_lexico;
};

struct Pilha {
    int tamanho;
    struct No** conteudo;
    int tamanho_reservado;
};

union lexico {
    struct valor_lexico_t valor_lexico;
};

#endif