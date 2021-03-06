#ifndef SYMBOLTABLE_HH
#define SYMBOLTABLE_HH

#include <vector>
#include <map>
#include <memory>
#include <functional>
#include "LexicalValue.h"
#include "string.h"

#define DEF(name) #name

#define TYPE_ERROR 0 
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_BOOL 3
#define TYPE_CHAR 4
#define TYPE_STRING 5

#define NATUREZA_LITERAL_INT        1
#define NATUREZA_LITERAL_FLOAT      2
#define NATUREZA_LITERAL_CHAR       3
#define NATUREZA_LITERAL_STRING     4
#define NATUREZA_LITERAL_BOOL       5
#define NATUREZA_IDENTIFICADOR      6
#define NATUREZA_VARIABLE           7
#define NATUREZA_VECTOR             8
#define NATUREZA_FUNCTION           9

/* Verificação de declarações */
#define ERR_UNDECLARED  10 //identificador não declarado
#define ERR_DECLARED    11 //identificador já declarado

/* Uso correto de identificadores */
#define ERR_VARIABLE    20 //identificador deve ser utilizado como variável
#define ERR_VECTOR      21 //identificador deve ser utilizado como vetor
#define ERR_FUNCTION    22 //identificador deve ser utilizado como função

/* Tipos e tamanho de dados */
#define ERR_WRONG_TYPE  30 //tipos incompatíveis
#define ERR_STRING_TO_X 31 //coerção impossível de var do tipo string
#define ERR_CHAR_TO_X   32 //coerção impossível de var do tipo char

/* Argumentos e parâmetros */
#define ERR_MISSING_ARGS    40 //faltam argumentos 
#define ERR_EXCESS_ARGS     41 //sobram argumentos 
#define ERR_WRONG_TYPE_ARGS 42 //argumentos incompatíveis

/* Verificação de tipos em comandos */
#define ERR_WRONG_PAR_INPUT  50 //parâmetro não é identificador
#define ERR_WRONG_PAR_OUTPUT 51 //parâmetro não é literal string ou expressão
#define ERR_WRONG_PAR_RETURN 52 //parâmetro não é expressão compatível com tipo do retorno

extern int get_line_number();
extern int getTableID();
extern void exitWithError(int errorCode);

struct FunctionParameter {
    int type;
    std::string name;
    LexicalValue lexical = {};
};

struct SymbolEntry {

    int location;
    int nature;
    int type;
    int size;
    std::vector<FunctionParameter> parameters = {}; // function exclusive
    LexicalValue lexical = {};
    std::string name;
    int offset;
    std::string calculatedLabel;
};

struct ActivationRegistry {
    int shiftAmount = 0;
    SymbolEntry* function = NULL;
};

class SymbolTable {

public:
    ActivationRegistry* activationRegistry = NULL;
    SymbolTable* parent;

    SymbolTable(SymbolTable* parent) {
        this->parent = parent;
        // if (parent) this->activationRegistry = this->parent->activationRegistry;
    }

    ~SymbolTable() {

        // for (auto entry : table) {
        //     delete entry.second;         
        // }

        for (auto entry : seqTable) {
            delete entry;
        }
    }

    ActivationRegistry* getActivationRegistryRecursively() {
        if (activationRegistry != NULL) {
            return activationRegistry;
        } else if (parent != NULL) {
            return parent->getActivationRegistryRecursively();
        } else {
            return NULL;
        }
    }

    void updateTypeSize(const LexicalValue& identifier, int sizeUpdate) {
        // SymbolEntry* entry = table[identifier.tokenValue.s];
        SymbolEntry* entry = retrieveSymbol(identifier.tokenValue.s);
        if (entry) {
            entry->size = sizeUpdate;
        }
    }

    void insertVariableDeclaration(const LexicalValue& identifier, int type) {
        SymbolEntry* entry = new SymbolEntry();
        entry->lexical = identifier;
        entry->location = get_line_number();
        entry->nature = NATUREZA_VARIABLE;
        entry->type = type;
        entry->size = 0;

        if (isAlreadyDeclared(identifier.tokenValue.s)) {
            // ERR_DECLARED
            exitWithError(ERR_DECLARED);
        }
        
        // table[identifier.tokenValue.s] = entry;
        setSymbol(identifier.tokenValue.s, entry);
    }

    void insertVectorDeclaration(const LexicalValue& identifier, int type) {
        SymbolEntry* entry = new SymbolEntry();
        entry->lexical = identifier;
        entry->location = get_line_number();
        entry->nature = NATUREZA_VECTOR;
        entry->type = type;
        entry->size = 0;

        if (isAlreadyDeclared(identifier.tokenValue.s)) {
            // ERR_DECLARED
            exitWithError(ERR_DECLARED);
        }
        
        // table[identifier.tokenValue.s] = entry;
        setSymbol(identifier.tokenValue.s, entry);
    }

    void insertFunctionDeclaration(const LexicalValue& identifier, int type, const std::vector<FunctionParameter>& parameters) {
        // if (this->tableID > 0) return;
        SymbolEntry* entry = new SymbolEntry();
        entry->lexical = identifier;
        entry->location = get_line_number();
        entry->nature = NATUREZA_FUNCTION;
        entry->type = type;
        entry->size = 0;
        entry->parameters = parameters;

        if (isAlreadyDeclared(identifier.tokenValue.s)) {
            // ERR_DECLARED
            exitWithError(ERR_DECLARED);
        }
        
        // table[identifier.tokenValue.s] = entry;

        setSymbol(identifier.tokenValue.s, entry);
    }

    void checkDeclarationRecursivelyInPreviousScopes(std::string identifierName) {
        if (isAlreadyDeclared(identifierName)) {
            return;
        } else if (parent != NULL) {
            parent->checkDeclarationRecursivelyInPreviousScopes(identifierName);
        } else {
            exitWithError(ERR_UNDECLARED);
        }
    }

    SymbolEntry* getEntry(std::string identifierName) {
        
        // if (table.find(identifierName) != table.end()) {
        //     return table[identifierName];
        // } else if (parent != NULL) {
        //     return parent->getEntry(identifierName);
        // } else {
        //     return NULL;
        // }

        SymbolEntry* symbol = retrieveSymbol(identifierName);
        if (symbol != NULL) {
            return symbol;
        } else if (parent != NULL) {
            return parent->getEntry(identifierName);
        } else {
            return NULL;
        }
    }

    int getTypeOfIdentifierName(std::string symbol) {
        // return table[symbol]->type;
        return retrieveSymbol(symbol)->type;
    }

    void printTable() {
        printf("TableID: %d\n", tableID);
        // for (std::pair<std::string, SymbolEntry*> row : table) {
        //     SymbolEntry* e = row.second;
        //     std::cout << "|" << row.first << "|" << e->lexical.tokenValue.s << "|" << e->location << "|" << natureString(e->nature) << "|" << typeString(e->type) << "|" << e->size << "|" << parametersString(e) << "|" << std::endl;
        // }

        for (SymbolEntry* row : seqTable) {
            SymbolEntry* e = row;
            std::cout << "|" << row->name << "|" << e->lexical.tokenValue.s << "|" << e->location << "|" << natureString(e->nature) << "|" << typeString(e->type) << "|" << e->size << "|" << parametersString(e) << "|" << std::endl;
        }
    }

    int getTypeOfDeclaration(const LexicalValue& value) {
        std::string stdValue = value.tokenValue.s;
        // std::cout << "TYPE: " << stdValue << std::endl;
        if (stdValue == "int") {
            return TYPE_INT;
        } else if (stdValue == "float") {
            return TYPE_FLOAT;
        } else if (stdValue == "char") {
            return TYPE_CHAR;
        } else if (stdValue == "string") {
            return TYPE_STRING;
        } else if (stdValue == "bool") {
            return TYPE_BOOL;
        } else {
            return TYPE_ERROR;
        }
    }

    int getSizeOfTypeOfDeclaration(int type) {
        
        switch(type) {
            case TYPE_INT: return 4;
            case TYPE_FLOAT: return 8;
            case TYPE_BOOL: return 1;
            case TYPE_CHAR: return 4;
            case TYPE_STRING: return 0;
            default: return -1;
        }
    }

    std::string natureString(int nature) {
        switch (nature)  
        {
        case NATUREZA_IDENTIFICADOR: return DEF(NATUREZA_IDENTIFICADOR);
        case NATUREZA_LITERAL_BOOL: return DEF(NATUREZA_LITERAL_BOOL);
        case NATUREZA_LITERAL_CHAR: return DEF(NATUREZA_LITERAL_CHAR);
        case NATUREZA_LITERAL_FLOAT: return DEF(NATUREZA_LITERAL_FLOAT);
        case NATUREZA_LITERAL_INT: return DEF(NATUREZA_LITERAL_INT);
        case NATUREZA_LITERAL_STRING: return DEF(NATUREZA_LITERAL_STRING);
        case NATUREZA_VARIABLE: return DEF(NATUREZA_VARIABLE);
        case NATUREZA_VECTOR: return DEF(NATUREZA_VECTOR);
        case NATUREZA_FUNCTION: return DEF(NATUREZA_FUNCTION);
        default: return "NONE";
        }
    }

    std::string parametersString(const SymbolEntry* e) {
        if (e->parameters.size() > 0) {

            std::string composedString = "";

            for (int i = 0; i < e->parameters.size(); i++) {
                FunctionParameter param = e->parameters[i];            
                composedString += typeString(param.type) + "(" + param.name + ")";
                if (i < e->parameters.size() - 1) {
                    composedString += ", ";
                }
            }

            return composedString;
        } else {
            return "NO PARAMS";
        }
    }

    int getEntryOffset(std::string identifierName) {
        int offset = 0;
        int symbolCount = 0;
        bool found = false;

        //if (activationRegistry == NULL) {
            for (SymbolEntry* symbol : seqTable) {
                if (symbol->name == identifierName) {
                    break;
                    // found = true;
                }

                symbolCount++;

                offset += symbol->size < 4 ? 4 : symbol->size;
            }
        //}

        if (parent != NULL && activationRegistry == NULL) {
            offset += parent->getEntryOffset(identifierName);
        }

        return offset;
    }

    int getEntryOffsetGlobal(std::string identifierName) {
        int offset = 0;
        int symbolCount = 0;
        bool found = false;

        for (SymbolEntry* symbol : seqTable) {
            if (symbol->name == identifierName) {
                break;
                // found = true;
            }

            symbolCount++;

            offset += symbol->size < 4 ? 4 : symbol->size;//(symbol->size % 4 == 0 ? symbol->size : (symbol->size % 4 + symbol->size));
        }

        return offset;
    }

    std::string typeString(int type) {
        switch (type)  
        {
        case TYPE_ERROR: return DEF(TYPE_ERROR);
        case TYPE_BOOL: return DEF(TYPE_BOOL);
        case TYPE_CHAR: return DEF(TYPE_CHAR);
        case TYPE_FLOAT: return DEF(TYPE_FLOAT);
        case TYPE_INT: return DEF(TYPE_INT);
        case TYPE_STRING: return DEF(TYPE_STRING);
        default: return "NONE";
        }
    }

    SymbolEntry* retrieveSymbol(std::string name) {
        for (SymbolEntry* entry : seqTable) {
            if (entry->name == name) return entry;
        }

        return NULL;
    }

    std::vector<SymbolEntry*> getOrderedSymbols() {
        return seqTable;
    }

    const int tableID = getTableID();
private:
    std::vector<SymbolEntry*> seqTable;
    // std::map<std::string, SymbolEntry*> table;

    SymbolEntry* setSymbol(std::string name, SymbolEntry* entry) {
        entry->name = name;
        seqTable.push_back(entry);
        return entry;
    }

    bool isAlreadyDeclared(std::string identifierName) {
        // return table.find(identifierName) != table.end();
        return retrieveSymbol(identifierName) != NULL;
    }
};

#endif /* SYMBOLTABLE_HH */