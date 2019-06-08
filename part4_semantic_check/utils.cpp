#include "TypesInclude.hh"

#include <string.h>
#include <vector>
#include <stack>

#define TO_STD_STRING(name) #name

std::string getErrorCodeString(int errorCode) {
    switch(errorCode) {
        case ERR_UNDECLARED: return TO_STD_STRING(ERR_UNDECLARED);
        case ERR_DECLARED: return TO_STD_STRING(ERR_DECLARED);
        case ERR_VARIABLE: return TO_STD_STRING(ERR_VARIABLE);
        case ERR_VECTOR: return TO_STD_STRING(ERR_VECTOR);
        case ERR_FUNCTION: return TO_STD_STRING(ERR_FUNCTION);
        case ERR_WRONG_TYPE: return TO_STD_STRING(ERR_WRONG_TYPE);
        case ERR_STRING_TO_X: return TO_STD_STRING(ERR_STRING_TO_X);
        case ERR_CHAR_TO_X: return TO_STD_STRING(ERR_CHAR_TO_X);
        case ERR_MISSING_ARGS: return TO_STD_STRING(ERR_MISSING_ARGS);
        case ERR_EXCESS_ARGS: return TO_STD_STRING(ERR_EXCESS_ARGS);
        case ERR_WRONG_PAR_INPUT: return TO_STD_STRING(ERR_WRONG_PAR_INPUT);
        case ERR_WRONG_PAR_OUTPUT: return TO_STD_STRING(ERR_WRONG_PAR_OUTPUT);
        case ERR_WRONG_PAR_RETURN: return TO_STD_STRING(ERR_WRONG_PAR_RETURN);
        default:
            return "UNKNOWN ERROR";
    }

    return "UNKNOWN ERROR";
}

std::vector<char*> listToFreeUp;
std::vector<SymbolTable*> tableFreeList;
static std::stack<SymbolTable*> tablesStack;
static int TableID = 0;

static SymbolTable* currentTable = new SymbolTable(NULL);

void forcePushTableAsCurrent(SymbolTable* someTable) {
    currentTable = someTable;
    // printf("TABLE FORCE PUSH\n");
    // currentTable->printTable();
}

SymbolTable* pushTempTableAndClear() {
    tablesStack.push(currentTable);
    tableFreeList.push_back(currentTable);
    TableID++;    
    // printf("TABLE PUSH\n");
    // currentTable->printTable();
    currentTable = new SymbolTable(currentTable);
    return currentTable;
}

SymbolTable* getTempTable() {
    return currentTable;
}

SymbolTable* popAndGetPrevious() {
    TableID--;
    // printf("TABLE POP\n");
    // currentTable->printTable();
    currentTable = tablesStack.top();
    return currentTable;
}

int getTableID() {
    return TableID;
}

char* copyString(char* toCopy) {
    char* dup = strdup(toCopy);
    listToFreeUp.push_back(dup);
    return dup;
}

char* copyStringFromTo(char* toCopy, int from, int to) {
    int newLength = to - from;
    char* dup = (char*)malloc(sizeof(char) * newLength);
    memcpy(dup, (toCopy + from), newLength);
    listToFreeUp.push_back(dup);
    return dup;
}

char* copyStringSliceOnly(char* toCopy) {
    int originalLength = strlen(toCopy);
    return copyStringFromTo(toCopy, 1, originalLength - 1);
}

void descompila(void* arvore) {
    if (arvore) {
        Node* root = (Node*) arvore;
        root->print();
    }

    printf("\n");
}

void libera(void* arvore) {
    if (arvore) {
        Node* root = (Node*) arvore;
        delete root;
    }

    for (char * memoryToFree : listToFreeUp) {
        free(memoryToFree);
    }

    listToFreeUp.clear();

    for (SymbolTable* table : tableFreeList) {
        delete table;
    }

    tableFreeList.clear();
}