#ifndef ILOC_H
#define ILOC_H

#include <iostream>
#include <vector>
#include "ILOCInstruction.h"

class ILOCProgram {
public:
    void add() {

    }

private:
    std::vector<ILOCInstruction*> instructions;
};

#endif /* ILOC_H */