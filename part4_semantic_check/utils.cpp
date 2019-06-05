#include "TypesInclude.hh"

#include <string.h>
#include <vector>
#include <stack>

std::vector<char*> listToFreeUp;
std::vector<SymbolTable*> tableFreeList;
static std::stack<SymbolTable*> tablesStack;

static SymbolTable* currentTable = new SymbolTable(NULL);

SymbolTable* pushTempTableAndClear() {
    tablesStack.push(currentTable);
    tableFreeList.push_back(currentTable);    
    currentTable = new SymbolTable(currentTable);
    return currentTable;
}

SymbolTable* getTempTable() {
    return currentTable;
}

SymbolTable* popAndGetPrevious() {
    currentTable = tablesStack.top();
    return currentTable;
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