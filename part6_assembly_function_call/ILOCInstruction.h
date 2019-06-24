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
    bool mainFunction = false;

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

        loadOperation.comment = "load " + identifierName + " into: " + registerToLoadData + " = Memory[rfp + " + std::to_string(subtractOffset) + "]";

        operations.push_back(loadOperation);        
    }
};

struct LoadIdentifierVector : public ILOCInstruction {

    LoadIdentifierVector() { }

    LoadIdentifierVector(std::string identifierName, std::string registerOfSum) {
        ILOCOperation loadOperation;

        std::string registerToLoadData = getRegister();

        loadOperation.label = "";
        loadOperation.operation = "loadA0";

        loadOperation.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(registerOfSum, ILOCOperatorType::REGISTER, true),
        };
        
        loadOperation.outOperators = {
            ILOCOperator(registerToLoadData, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = "load " + identifierName + " into: " + registerToLoadData + " = Memory[rfp + " + registerOfSum + "]";

        operations.push_back(loadOperation);        
    }
};

struct LoadLiteral : public ILOCInstruction {
    
    LoadLiteral() { }

    LoadLiteral(std::string value) {

        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "loadI";

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

    Assignment(std::string displacementRegister, std::string fromLocation, int offsetFromStackPointer, std::string identifierName, bool isGlobal) {

        ILOCOperation addDisplacement;

        addDisplacement.label = "";
        addDisplacement.operation = "addI";
        addDisplacement.operators = {
            ILOCOperator(displacementRegister, ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(offsetFromStackPointer), ILOCOperatorType::IMMEDIATE, true)
        };

        addDisplacement.outOperators = {
            ILOCOperator(displacementRegister, ILOCOperatorType::REGISTER, true),
            
        };

        operations.push_back(addDisplacement);


        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "storeAO";
        loadOperation.operators = {
            ILOCOperator(fromLocation, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.outOperators = {
            ILOCOperator(isGlobal ? getRegisterRBSS() : getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(displacementRegister, ILOCOperatorType::REGISTER, true),
        };

        operations.push_back(loadOperation);
    }

    Assignment(std::string fromLocation, int immediateOffset, std::string identifierName, bool isGlobalVariable) {
        ILOCOperation loadOperation;

        loadOperation.label = "";
        loadOperation.operation = "storeAI";
        loadOperation.operators = {
            ILOCOperator(fromLocation, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.outOperators = {
            ILOCOperator(isGlobalVariable ? getRegisterRBSS() : getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(immediateOffset), ILOCOperatorType::IMMEDIATE, true)
        };

        std::string registerToStore = isGlobalVariable ? "rbss" : "rfp";
        loadOperation.comment = "store at Memory[" + registerToStore + " + " + std::to_string(immediateOffset) + "] = " + fromLocation + ": " + identifierName + " = " + fromLocation;

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

struct FunctionDeclaration : public ILOCInstruction {

    FunctionDeclaration() {
        int returnAddressLentgh = 4;
        ILOCOperation loadReturnAddress;

        std::string registerWithAddressToReturnTo = ILOCInstruction::getRegister();

        loadReturnAddress.label = "";

        loadReturnAddress.operation = "subI";

        loadReturnAddress.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(returnAddressLentgh), ILOCOperatorType::IMMEDIATE, true),
        };

        loadReturnAddress.outOperators = {
            ILOCOperator(registerWithAddressToReturnTo, ILOCOperatorType::REGISTER, true)
        };
        
        loadReturnAddress.comment = "load return address to register " + registerWithAddressToReturnTo;
        
        operations.push_back(loadReturnAddress);


        std::string registerThatContainsTheFunctionsReturnInstructionAddress = getRegister();

        ILOCOperation loadAddressOfReturnFunction;
        loadAddressOfReturnFunction.operation = "load";

        loadAddressOfReturnFunction.operators = {
            ILOCOperator(registerWithAddressToReturnTo, ILOCOperatorType::REGISTER, true),
        };

        loadAddressOfReturnFunction.outOperators = {
            ILOCOperator(registerThatContainsTheFunctionsReturnInstructionAddress, ILOCOperatorType::REGISTER, true),
        };

        operations.push_back(loadAddressOfReturnFunction);


        ILOCOperation jumpBackOperation;

        jumpBackOperation.label = "";

        jumpBackOperation.operation = "jump";

        jumpBackOperation.outOperators = {
            ILOCOperator(registerThatContainsTheFunctionsReturnInstructionAddress, ILOCOperatorType::REGISTER, true)
        };

        operations.push_back(jumpBackOperation);
    }
};

struct Return : public ILOCInstruction {
    Return(std::string registerWithReturnValue) {

        int returnAddressLentgh = 8;
        ILOCOperation loadReturnAddress;

        std::string registerWithAddressOfReturnValue = ILOCInstruction::getRegister();

        loadReturnAddress.label = "";

        loadReturnAddress.operation = "subI";

        loadReturnAddress.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(returnAddressLentgh), ILOCOperatorType::IMMEDIATE, true),
        };

        loadReturnAddress.outOperators = {
            ILOCOperator(registerWithAddressOfReturnValue, ILOCOperatorType::REGISTER, true)
        };
        
        loadReturnAddress.comment = "load of register with return value: " + registerWithAddressOfReturnValue;
        
        operations.push_back(loadReturnAddress);



        ILOCOperation loadBackOperation;

        loadBackOperation.label = "";

        loadBackOperation.operation = "store";
        loadBackOperation.operators = {
            ILOCOperator(registerWithReturnValue, ILOCOperatorType::REGISTER, true),
        };

        loadBackOperation.outOperators = {
            ILOCOperator(registerWithAddressOfReturnValue, ILOCOperatorType::REGISTER, true)
        };

        loadBackOperation.comment = "save return value on Memory(rfp - 8) = " + registerWithReturnValue;
        
        operations.push_back(loadBackOperation);
    }
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

struct LoadGlobalVariable : public ILOCInstruction {

    LoadGlobalVariable() { }

    LoadGlobalVariable(std::string variableName, int bytesCount) {
        ILOCOperation loadOperation;

        std::string registerToLoadData = getRegister();

        loadOperation.label = "";
        loadOperation.operation = "loadAI";

        loadOperation.operators = {
            ILOCOperator(getRegisterRBSS(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(std::to_string(bytesCount), ILOCOperatorType::IMMEDIATE, true),
        };
        
        loadOperation.outOperators = {
            ILOCOperator(registerToLoadData, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = "load GLOBAL " + variableName + " into: " + registerToLoadData + " = Memory[rfp + " + std::to_string(bytesCount) + "]";

        operations.push_back(loadOperation);
    }
};

struct LoadGlobalVectorVariable : public ILOCInstruction {

    LoadGlobalVectorVariable() { }

    LoadGlobalVectorVariable(std::string variableName, std::string registerOfSum) {
        ILOCOperation loadOperation;

        std::string registerToLoadData = getRegister();

        loadOperation.label = "";
        loadOperation.operation = "loadA0";

        loadOperation.operators = {
            ILOCOperator(getRegisterRBSS(), ILOCOperatorType::REGISTER, true),
            ILOCOperator(registerOfSum, ILOCOperatorType::REGISTER, true),
        };
        
        loadOperation.outOperators = {
            ILOCOperator(registerToLoadData, ILOCOperatorType::REGISTER, true)
        };

        loadOperation.comment = "load GLOBAL " + variableName + " into: " + registerToLoadData + " = Memory[rfp + " + registerOfSum + "]";

        operations.push_back(loadOperation);
    }
};

struct FunctionCall : public ILOCInstruction {

    FunctionCall(std::string functionName, std::string calculatedLabel, int numberOfInstructionsToJump, std::vector<ILOCInstruction*>& parametersLoadPearInstructions) {

        std::string rfpSaveRegister = getRegister();
        

        {
            ILOCOperation saveRFP;

            saveRFP.operation = "addI";

            saveRFP.operators = {
                ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
                ILOCOperator("0", ILOCOperatorType::IMMEDIATE, true),
            };

            saveRFP.outOperators = {
                ILOCOperator(rfpSaveRegister, ILOCOperatorType::REGISTER, true),
            };

            saveRFP.comment = "save RFP value: " + rfpSaveRegister + " = rfp";

            operations.push_back(saveRFP);
        }

        std::string rspSaveRegister = getRegister();
        {

            ILOCOperation saveRSP;

            saveRSP.operation = "addI";

            saveRSP.operators = {
                ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
                ILOCOperator("0", ILOCOperatorType::IMMEDIATE, true),
            };

            saveRSP.outOperators = {
                ILOCOperator(rspSaveRegister, ILOCOperatorType::REGISTER, true),
            };

            saveRSP.comment = "save RSP value: " + rspSaveRegister + " = rsp";

            operations.push_back(saveRSP);
        }

        {
            ILOCOperation RFP_equal_RSP;

            RFP_equal_RSP.operation = "addI";


            RFP_equal_RSP.operators = {
                ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
                ILOCOperator("0", ILOCOperatorType::IMMEDIATE, true),
            };

            RFP_equal_RSP.outOperators = {
                ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            };

            RFP_equal_RSP.comment = "rfp = rsp";

            operations.push_back(RFP_equal_RSP);
        }

        std::string returnAddressRegister = getRegister();

        ILOCOperation setReturnAddress;

        setReturnAddress.operation = "addI";

        setReturnAddress.operators = {
            ILOCOperator(getRegisterRPC(), ILOCOperatorType::REGISTER, true),
            ILOCOperator("0", ILOCOperatorType::IMMEDIATE, false),
        };

        setReturnAddress.outOperators = {
            ILOCOperator(returnAddressRegister, ILOCOperatorType::REGISTER, true),
        };

        setReturnAddress.comment = "save return address in " + returnAddressRegister;


        ILOCOperation storeReturnAddressAtActivationRegistry;

        storeReturnAddressAtActivationRegistry.operation = "storeAI";

        storeReturnAddressAtActivationRegistry.operators = {
            ILOCOperator(returnAddressRegister, ILOCOperatorType::REGISTER, true),
        };

        storeReturnAddressAtActivationRegistry.outOperators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator("4", ILOCOperatorType::IMMEDIATE, false),
        };

        storeReturnAddressAtActivationRegistry.comment = "load return address to activation registry";


        ILOCOperation allocateSpaceToReturnValueAndAddressRFP;

        allocateSpaceToReturnValueAndAddressRFP.operation = "addI";
        allocateSpaceToReturnValueAndAddressRFP.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator("8", ILOCOperatorType::IMMEDIATE, false),
        };

        allocateSpaceToReturnValueAndAddressRFP.outOperators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
        };

        allocateSpaceToReturnValueAndAddressRFP.comment = "allocateSpaceToReturnValueAndAddressRFP";



        ILOCOperation allocateSpaceToReturnValueAndAddressRSP;

        allocateSpaceToReturnValueAndAddressRSP.operation = "addI";
        allocateSpaceToReturnValueAndAddressRSP.operators = {
            ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator("8", ILOCOperatorType::IMMEDIATE, false),
        };

        allocateSpaceToReturnValueAndAddressRSP.outOperators = {
            ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
        };

        allocateSpaceToReturnValueAndAddressRSP.comment = "allocateSpaceToReturnValueAndAddressRSP";

        int instructionsToAddOnReturn = 5 + numberOfInstructionsToJump;
        

        ILOCOperation jumpToFunction;

        jumpToFunction.operation = "jumpI";

        jumpToFunction.outOperators = {
            ILOCOperator(calculatedLabel, ILOCOperatorType::LABEL, true),
        };

        jumpToFunction.comment = "jump to function: " + functionName;

        std::string registerWhereReturnValueAddressRemais = getRegister();

        ILOCOperation getAddressOfReturnValue;

        getAddressOfReturnValue.operation = "subI";
        getAddressOfReturnValue.operators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
            ILOCOperator("8", ILOCOperatorType::IMMEDIATE, true),
        };

        getAddressOfReturnValue.outOperators = {
            ILOCOperator(registerWhereReturnValueAddressRemais, ILOCOperatorType::REGISTER, true),
        };

        
        ILOCOperation restoreRFP;

        restoreRFP.operation = "addI";

        restoreRFP.operators = {
            ILOCOperator(rfpSaveRegister, ILOCOperatorType::REGISTER, true),
            ILOCOperator("0", ILOCOperatorType::IMMEDIATE, true),
        };

        restoreRFP.outOperators = {
            ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
        };


        ILOCOperation restoreRSP;

        restoreRSP.operation = "addI";

        restoreRSP.operators = {
            ILOCOperator(rspSaveRegister, ILOCOperatorType::REGISTER, true),
            ILOCOperator("0", ILOCOperatorType::IMMEDIATE, true),
        };

        restoreRSP.outOperators = {
            ILOCOperator(getRegisterRSP(), ILOCOperatorType::REGISTER, true),
        };

        ILOCOperation returnValueLoadFromActivationRegister;

        returnValueLoadFromActivationRegister.operation = "load";

        returnValueLoadFromActivationRegister.operators = {
            ILOCOperator(registerWhereReturnValueAddressRemais, ILOCOperatorType::REGISTER, true),
        };

        returnValueLoadFromActivationRegister.outOperators = {  
            ILOCOperator(getRegister(), ILOCOperatorType::REGISTER, true),
        };

        setReturnAddress.operators[1].name = std::to_string(instructionsToAddOnReturn);
        // NOW AND ON OPERATIONS SHOULD BE PUSHED TO THE END


        operations.push_back(setReturnAddress);
        operations.push_back(storeReturnAddressAtActivationRegistry);
        operations.push_back(allocateSpaceToReturnValueAndAddressRFP);
        operations.push_back(allocateSpaceToReturnValueAndAddressRSP);

        // TODO: FOR EACH FUNCTION PARAMETERS LOAD IN 
        //       INVERSE ORDER f(int x, int y) , store Y, store X, ...
        //       and instructionsToAddOnReturn++ for each one
        int startMaxNumberOfParameters = parametersLoadPearInstructions.size() * 4 - 4; // FIXED SIZE FOR ONLY INT VALUE PASSING
        for (auto it = parametersLoadPearInstructions.begin(); it != parametersLoadPearInstructions.end(); it++) {
            ILOCOperation parameterOperation;

            ILOCOperation pearOperation = (*(*it)->operations.rbegin());
            ILOCOperator lastOutOperator = (*pearOperation.outOperators.rbegin());

            std::string registerWithValueToBePassed = lastOutOperator.name;

            parameterOperation.operation = "storeAI";
            parameterOperation.operators = {
                ILOCOperator(registerWithValueToBePassed, ILOCOperatorType::REGISTER, true),
            };
            parameterOperation.outOperators = {
                ILOCOperator(getRegisterRFP(), ILOCOperatorType::REGISTER, true),
                ILOCOperator(std::to_string(startMaxNumberOfParameters), ILOCOperatorType::IMMEDIATE, true),
            };

            operations.push_back(parameterOperation);

            startMaxNumberOfParameters -= 4;
        }

        operations.push_back(jumpToFunction);
        operations.push_back(getAddressOfReturnValue);
        operations.push_back(restoreRFP);
        operations.push_back(restoreRSP);
        operations.push_back(returnValueLoadFromActivationRegister);
    }
};

#endif /* ILOCINSTRUCTION_H */