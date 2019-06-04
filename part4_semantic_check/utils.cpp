#include "TypesInclude.hh"

#include <string.h>
#include <vector>
#include <stack>

std::vector<char*> listToFreeUp;
static std::stack<SymbolTable*> tablesStack;

static SymbolTable* currentTable = new SymbolTable(NULL);

static SymbolTable* tempTable = NULL;

SymbolTable* pushTempTableAndClear() {
    if (tempTable) {
        tablesStack.push(currentTable);
        currentTable = tempTable;
        tempTable = NULL;
    }
    return currentTable;
}

SymbolTable* getTempTable() {
    if (tempTable == NULL) {
        tempTable = new SymbolTable(currentTable);
    }

    return tempTable;
}

SymbolTable* getCurrentTable() {
    return currentTable;
}

SymbolTable* getNewSymbolTable() {
    SymbolTable* newSymbolTable = NULL;
    if (tablesStack.size() > 0) {
        newSymbolTable = new SymbolTable(currentTable);
    } else {
        newSymbolTable = new SymbolTable(NULL);
    }

    tablesStack.push(currentTable);
    currentTable = newSymbolTable;
    return newSymbolTable;
}

SymbolTable* popAndGetPrevious() {
    if (tablesStack.size() > 1) {
        SymbolTable* currentFromStack = tablesStack.top();
        tablesStack.pop();
        delete currentFromStack;
    }
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

    while(tablesStack.size() > 0) {
        SymbolTable* table = tablesStack.top();
        tablesStack.pop();

        delete table;
    }
}