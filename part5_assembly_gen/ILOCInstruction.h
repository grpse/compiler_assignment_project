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
    bool isBooleanComparison = false;

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

    static inline std::string getRegisterRPC() {
        return "rpc";
    }

    static inline std::string getRegisterRSP() {
        return "rsp";
    }

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

    void updateInstructionsCount(int instructionsCount) {
        this->blockInstructionsCount = instructionsCount;

        ILOCOperation loadOperation;

        loadOperation.label = getLabel();
        loadOperation.operation = "nop";

        loadOperation.comment = std::to_string(blockInstructionsCount) + " instructions";
        
        operations.push_back(loadOperation);       
    }
};

struct BinaryExpression : public ILOCInstruction {

    BinaryExpression() {}
    BinaryExpression(std::string operatorSymbol, std::string leftOperatorName, std::string rightOperatorName) {

        ILOCOperation binaryOper;
        binaryOper.label = "";

        if (operatorSymbol == "+") {
            binaryOper.operation = "add";
        } else if (operatorSymbol == "-") {
            binaryOper.operation = "sub";
        } else if (operatorSymbol == "*") {
            binaryOper.operation = "mult";
        } else if (operatorSymbol == "/") {
            binaryOper.operation = "div";
        } else if (operatorSymbol == "<") {
            binaryOper.operation = "cmp_LT";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == "<=") {
            binaryOper.operation = "cmp_LE";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == "==") {
            binaryOper.operation = "cmp_EQ";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == ">=") {
            binaryOper.operation = "cmp_GE";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == ">") {
            binaryOper.operation = "cmp_GT";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == "!=") {
            binaryOper.operation = "cmp_NE";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == "&&") {
            binaryOper.operation = "and";
            binaryOper.isBooleanComparison = true;
        } else if (operatorSymbol == "||") {
            binaryOper.operation = "or";
            binaryOper.isBooleanComparison = true;
        }

        std::string outOperatorRegister = getRegister();

        binaryOper.operators = {
            ILOCOperator(leftOperatorName, ILOCOperatorType::REGISTER, true),
            ILOCOperator(rightOperatorName, ILOCOperatorType::REGISTER, true)
        };

        binaryOper.outOperators = {
            ILOCOperator(outOperatorRegister, ILOCOperatorType::REGISTER, true)
        };

        operations.push_back(binaryOper);

    }

};

struct Nop : public ILOCInstruction {

    Nop(std::string comment = "") {
        ILOCOperation loadOperation;

        loadOperation.label = getLabel();
        loadOperation.operation = "nop";

        loadOperation.operators = {
        };
        
        loadOperation.outOperators = {
        };

        loadOperation.comment = comment;

        operations.push_back(loadOperation);                
    }
};

struct LocalDeclaration : public ILOCInstruction {

    LocalDeclaration() { }
    LocalDeclaration(int size, std::string variableName) {
        ILOCOperation loadOperation;

        int minimalSize = size < 4 ? 4 : size;

        loadOperation.label = "";
        loadOperation.operation = "addI";

        loadOperation.operators = {
            ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(minimalSize), ILOCOperatorType::IMMEDIATE, true)
        };
        
        loadOperation.outOperators = {
            ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = variableName + ", " + std::to_string(minimalSize) + " bytes";

        operations.push_back(loadOperation);        
    }
};

struct LoadIdentifier : public ILOCInstruction {

    LoadIdentifier() { }

    LoadIdentifier(std::string identifierName, int subtractOffset) {
        ILOCOperation loadOperation;

        std::string registerToLoadData = getRegister();

        loadOperation.label = "";
        loadOperation.operation = "loadAI";

        loadOperation.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(subtractOffset), ILOCOperatorType::IMMEDIATE, true),
        };
        
        loadOperation.outOperators = {
            ILOCOperator(registerToLoadData, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = "load " + identifierName + " into: " + registerToLoadData + " = Memory(rfp + " + std::to_string(subtractOffset) + ")";

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

        operations.push_back(loadOperation);
    }

    Assignment(std::string fromLocation, int immediateOffset, std::string identifierName) {
        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "storeAI";
        loadOperation.operators = {
            ILOCOperator(fromLocation, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.outOperators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(immediateOffset), ILOCOperatorType::IMMEDIATE, true)
        };

        loadOperation.comment = "store at Memory(rfp + " + std::to_string(immediateOffset) + ") = " + fromLocation + ": " + identifierName + " = " + fromLocation;

        operations.push_back(loadOperation);
    }
};

struct IfThen : public ILOCInstruction {
    
    IfThen() { }

    IfThen(int jumpInstructionOffset) {

    }
};

struct IfThenElse : public ILOCInstruction {
    IfThenElse() { }
};

struct Function : public ILOCInstruction {
    std::vector<ILOCOperation> paramsPassing;
    std::vector<ILOCOperation> instructionsList;
};

struct While : public ILOCInstruction {
    While(std::string startOfComparisonLabel) {
        
        ILOCOperation jumpOperation;

        jumpOperation.label = "";
        jumpOperation.operation = "jumpI";
        jumpOperation.operators = {};

        jumpOperation.outOperators = {
            ILOCOperator(startOfComparisonLabel, ILOCOperatorType::LABEL, true)
        };

        jumpOperation.comment = "jump to " + startOfComparisonLabel;

        operations.push_back(jumpOperation);
    }
};

#endif /* ILOCINSTRUCTION_H */