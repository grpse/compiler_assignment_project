#include "TypesInclude.hh"

#include <string.h>
#include <vector>

std::vector<char*> listToFreeUp;

char* copyString(char* toCopy) {
    char* dup = strdup(toCopy);
    listToFreeUp.push_back(dup);
    return dup;
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
}