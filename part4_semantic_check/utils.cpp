#include "TypesInclude.hh"

#include <string.h>
#include <vector>
#include <stack>

std::vector<char*> listToFreeUp;
std::stack<SymbolTable*> tablesStack;

static SymbolTable* currentTable = new SymbolTable(NULL);

SymbolTable* getCurrentTable() {
    return currentTable;
}

SymbolTable* getNewSymbolTable() {
    if (tablesStack.size() > 0) {
        currentTable = new SymbolTable(tablesStack.top());
    } else {
        currentTable = new SymbolTable(NULL);
    }
    tablesStack.push(currentTable);
    return currentTable;
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