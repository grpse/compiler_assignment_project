typedef union lexico  {
    struct valor_lexico_t {
        int numero_da_linha;
        int tipo_do_token;
        union valor_do_token {
            float f;
            int i;
            int b;
            char c;
            char* s;
        } valor_do_token;
    } valor_lexico;
} lexico;

int main() {

    lexico l;

    l.valor_lexico.valor_do_token.f = 123.3f;

    return 0;
}