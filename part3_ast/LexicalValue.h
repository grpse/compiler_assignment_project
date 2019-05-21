#ifndef LEXICAL_VALUE_H
#define LEXICAL_VALUE_H

#define NOT_LITERAL 0
#define LITERAL_INT 1
#define LITERAL_FLOAT 2
#define LITERAL_BOOL 3
#define LITERAL_CHAR 4
#define LITERAL_STRING 5

#define NO_TOKEN_TYPE 0
#define RESERVED_WORD 1
#define SPECIAL_CHARACTERS 2
#define COMPOSED_OPERATORS 3
#define IDENTIFIERS 4
#define LITERALS 5

struct LexicalValue {
    int lineNumber;
    int tokenType;
    int literalType;
    union {
        float f;
        int i;
        int b;
        char c;
        char* s;
    } tokenValue;
};

#endif /* LEXICAL_VALUE_H */