#ifndef ILOCINSTRUCTION_H
#define ILOCINSTRUCTION_H

#include <iostream>
#include <vector>

enum ILOCOperatorType {
    LABEL,
    REGISTER,
    IMMEDIATE
};

struct ILOCOperator {
    std::string name;
    ILOCOperatorType type;
    bool resolvedOperator;
};

struct ILOCInstruction {
    std::string label;
    const std::string operation;
    std::vector<ILOCOperator> operators;
};

struct LoadILOCInstruction : public ILOCInstruction {
    const std::string operation = "load";
};

struct StoreILOCInstruction : public ILOCInstruction {
    const std::string operation = "store";
};

struct While {
    std::vector<ILOCInstruction> condition;
    std::vector<ILOCInstruction> instructionsList;

};
#endif /* ILOCINSTRUCTION_H */