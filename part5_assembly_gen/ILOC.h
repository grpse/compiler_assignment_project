#ifndef ILOC_H
#define ILOC_H

#include <iostream>
#include <vector>
#include <list>
#include "ILOCInstruction.h"

class ILOCProgram {
public:
    void addAsFirst(ILOCInstruction* instruction) {
        instructions.push_front(instruction);
    }

    void add(ILOCInstruction* instruction) {
        instructions.push_back(instruction);
    }

    void printProgram() {
        for (ILOCInstruction* iloc : instructions) {
            iloc->printInstruction();
        }
    }

    int getOperationsCount() {
        int operationsCount = 0;
        for (ILOCInstruction* iloc : instructions) {
            operationsCount += iloc->operations.size();
        }
        return operationsCount;
    }


private:
    std::list<ILOCInstruction*> instructions;
};

#endif /* ILOC_H */