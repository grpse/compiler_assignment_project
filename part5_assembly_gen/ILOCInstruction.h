#ifndef ILOCINSTRUCTION_H
#define ILOCINSTRUCTION_H

#include <iostream>
#include <vector>

static int labelCount = 0;
static int tempCount = 0;
static int registerCount = 0;

enum ILOCOperatorType {
    LABEL,
    REGISTER,
    IMMEDIATE
};

struct ILOCOperator {
    std::string name;
    ILOCOperatorType type;
    bool resolvedOperator;

    ILOCOperator(std::string name, ILOCOperatorType type, bool resolvedOperator) :
        name(name), type(type), resolvedOperator(resolvedOperator) { }

    ILOCOperator() { }
};

struct ILOCOperation {
    std::string label = "";
    std::string operation;
    std::vector<ILOCOperator> operators;
    std::vector<ILOCOperator> outOperators;
    std::string comment = "";

    void printOperation() {

        // print label
        if (label != "") {
            std::cout << label << ":\t";
        } else {
            std::cout << "\t";
        }

        // print operation
        std::cout << operation << " ";

        // print operators;
        for (int i = 0; i < operators.size(); i++) {
            ILOCOperator oper = operators[i];
            std::cout << oper.name;

            if (i < operators.size() - 1) {
                std::cout << ", ";
            } else {
                std::cout << " ";
            }
        }

        if (outOperators.size() > 0) {
            std::cout << "=> ";
        }

        // print out operators
        for (int i = 0; i < outOperators.size(); i++) {
            ILOCOperator oper = outOperators[i];
            std::cout << oper.name;

            if (i < outOperators.size() - 1) {
                std::cout << ", ";
            } else {
                std::cout << " ";
            }
        }

        if (comment != "") {
            std::cout << "// " << comment;
        }
    }
};

struct ILOCInstruction {

    int blockInstructionsCount = 0;

    std::vector<ILOCOperation> operations;

    static inline std::string getRegisterRFP() {
        return "rfp";
    }

    static inline std::string getRegisterRBSS() {
        return "rbss";
    }

    static std::string getLabel() {
        return "L" + std::to_string(labelCount++);
    }
    
    static std::string getTemp() {
        return "T" + std::to_string(tempCount++);
    }

    static std::string getRegister() {
        return "r" + std::to_string(registerCount++);
    }

    void printInstruction() {
        for (ILOCOperation oper : operations) {
            oper.printOperation();
            std::cout << std::endl;
        }
    }

};

struct CommandBlock : public ILOCInstruction {

    CommandBlock() {}
    CommandBlock(int blockInstructionsCount) {
        this->blockInstructionsCount = blockInstructionsCount;

        ILOCOperation loadOperation;

        loadOperation.label = getLabel();
        loadOperation.operation = "nop";

        loadOperation.comment = std::to_string(blockInstructionsCount) + " instructions";
        
        operations.push_back(loadOperation);       
    }
};

struct LocalDeclaration : public ILOCInstruction {

    LocalDeclaration() { }
    LocalDeclaration(int size, std::string variableName) {
        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "addI";

        loadOperation.operators = {
            ILOCOperator(std::to_string(size), ILOCOperatorType::IMMEDIATE, true)
        };
        
        loadOperation.outOperators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = variableName + ", " + std::to_string(size) + " bytes";

        operations.push_back(loadOperation);        
    }
};

struct LoadLiteral : public ILOCInstruction {
    
    LoadLiteral() { }

    LoadLiteral(std::string value) {

        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "i2i";

        loadOperation.operators = {
            ILOCOperator(value, ILOCOperatorType::IMMEDIATE, true)
        };
        
        loadOperation.outOperators = {
            ILOCOperator(getRegister(), ILOCOperatorType::REGISTER, true)
        };

        operations.push_back(loadOperation);
    }
};

struct Assignment : public ILOCInstruction {
    
    Assignment(std::string whereToStore, std::string fromLocation) {
        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "store";
        loadOperation.operators = {
            ILOCOperator(fromLocation, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.outOperators = {
            ILOCOperator(whereToStore, ILOCOperatorType::REGISTER, true)
        };
    }

    Assignment(std::string whereToStore, std::string fromLocation, int immediateOffset) {
        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "storeAI";
        loadOperation.operators = {
            ILOCOperator(fromLocation, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.outOperators = {
            ILOCOperator(whereToStore, ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(immediateOffset), ILOCOperatorType::IMMEDIATE, true)
        };
    }
};

struct If : public ILOCInstruction {
    std::vector<ILOCOperation> ifConditions;
    std::vector<ILOCOperation> instructionList;
};

struct IfElse : public ILOCInstruction {
    std::vector<ILOCOperation> ifCondition;
    std::vector<ILOCOperation> ifInstructionList;
    std::vector<ILOCOperation> elseInstructionList;
};

struct Function : public ILOCInstruction {
    std::vector<ILOCOperation> paramsPassing;
    std::vector<ILOCOperation> instructionsList;
};

struct While : public ILOCInstruction {
    std::vector<ILOCOperation> condition;
    std::vector<ILOCOperation> instructionsList;
};

#endif /* ILOCINSTRUCTION_H */