#ifndef ILOC_H
#define ILOC_H

#include <iostream>
#include <vector>
#include <list>
#include "ILOCInstruction.h"
#include "SymbolTable.hh"
extern SymbolTable*  getTempTable();

class ILOCProgram {

public:
    void add(ILOCInstruction* instruction) {
        instructions.push_back(instruction);
    }

    void printProgram() {
        int stackForm = 1024;
        std::string mainLabel = getMainFunctionLabel();

        std::cout << "\tloadI " << std::to_string(stackForm) << " => rfp\n";
        std::cout << "\tloadI " << std::to_string(stackForm) << " => rsp\n";
        std::cout << "\tloadI " << std::to_string(getOperationsCount() + 5)  << " => rbss\n";
        std::cout << "\tjumpI " << " => " << mainLabel << "\n"; // TODO: go to main function

        
        for (ILOCInstruction* iloc : instructions) {
            iloc->printInstruction();
        }

        std::cout << "\thalt\n";
    }

    int getOperationsCount() {
        int operationsCount = 0;
        for (ILOCInstruction* iloc : instructions) {
            operationsCount += iloc->operations.size();
        }
        return operationsCount;
    }

    void resolveLabels() {
        for (auto instruction : instructions) {
            for (int i = 0; i < instruction->operations.size(); i++) {
                for (int j = 0; j < instruction->operations[i].outOperators.size(); j++) {
                    if (!instruction->operations[i].outOperators[j].resolvedOperator) {
                        std::string functionName = instruction->operations[i].outOperators[j].name;
                        SymbolEntry* entry = getTempTable()->getEntry(functionName);
                        std::string rightLabel = entry->calculatedLabel;
                        instruction->operations[i].outOperators[j].resolvedOperator = true;
                        instruction->operations[i].outOperators[j].name = rightLabel;
                    }
                }
            }
        }
    }

    int getInstructionsCount() {
        return instructions.size();
    }

    void adjustAddressJumpTrueAndFalseBetween(std::string trueLabel, std::string falseLabel, int startInstructionPos, int endInstructionPos) {

        // TODO:    cycle through from end to start of instructions
        //          and then operations. If I found one OR then previous
        //          operations have TRUE label to TRUELABEL of the block
        //          commands and FALSE label to the NEXT operations and
        //          continue up. If I found one AND then previous operations
        //          have FALSE label to FALSELABEL and previous cbr should
        //          have TRUE to next operation label.
        bool jumpToTrueLabel = true;

        if (instructions[endInstructionPos]->operations[0].label == "") {
            // instructions[endInstructionPos]->operations[0].label = ILOCInstruction::getLabel();
        }

        std::string nextOperationJumpLabel = falseLabel;//instructions[endInstructionPos]->operations[0].label;

        bool isOnlyOneInstruction = endInstructionPos - startInstructionPos == 1;
        bool firstBackInstruction = true;

        for (int i = endInstructionPos; i >= startInstructionPos; i--) {
            ILOCInstruction* iloc = instructions[i];

            for (int j = 0; j < iloc->operations.size(); j++) {
                if (iloc->operations[j].operation == "and") {
                    jumpToTrueLabel = false;
                } else if (iloc->operations[j].operation == "or") {
                    jumpToTrueLabel = true;
                }
            }

            

            bool isConditionalComparison = false;
            for (int j = 0; j < iloc->operations.size(); j++) {
                isConditionalComparison = isConditionalComparison || iloc->operations[j].isBooleanComparison;
            }

            if (isConditionalComparison) {
                ILOCOperation lastOperation = (*iloc->operations.rbegin());

                bool isCommandBlockEntryInstruction = lastOperation.outOperators.size() == 0;
                if (!isCommandBlockEntryInstruction) {
            
                    if (jumpToTrueLabel && firstBackInstruction) {
                        nextOperationJumpLabel = falseLabel;
                        firstBackInstruction = false;
                    } else if (firstBackInstruction) {
                        nextOperationJumpLabel = trueLabel;
                        firstBackInstruction = false;
                    }

                    ILOCOperator lastOperatorResult = (*lastOperation.outOperators.rbegin());

                    ILOCOperation cbrJump;

                    cbrJump.label = "";
                    cbrJump.operation = "cbr";
                    cbrJump.operators = {
                        ILOCOperator(lastOperatorResult.name, ILOCOperatorType::REGISTER, true)
                    };

                    if (jumpToTrueLabel) {
                        cbrJump.outOperators = {
                            ILOCOperator(trueLabel, ILOCOperatorType::LABEL, true),
                            ILOCOperator(nextOperationJumpLabel, ILOCOperatorType::LABEL, true),
                        };
                    } else {
                        cbrJump.outOperators = {
                            ILOCOperator(nextOperationJumpLabel, ILOCOperatorType::LABEL, true),
                            ILOCOperator(falseLabel, ILOCOperatorType::LABEL, true),
                        };
                    }

                    iloc->operations.push_back(cbrJump);

                    
                }            
            }
            
            ILOCOperation lastOperation = (*iloc->operations.rbegin());
            bool isCommandBlockEntryInstruction = lastOperation.outOperators.size() == 0;

            if (!isCommandBlockEntryInstruction) {
                nextOperationJumpLabel = iloc->operations[0].label = ILOCInstruction::getLabel();
            }

            if (isOnlyOneInstruction && !isCommandBlockEntryInstruction) {
                ILOCOperator lastOperatorResult = (*lastOperation.outOperators.rbegin());
                ILOCOperation cbrJump;

                if (jumpToTrueLabel && firstBackInstruction) {
                    nextOperationJumpLabel = falseLabel;
                    firstBackInstruction = false;
                }

                cbrJump.label = "";
                cbrJump.operation = "cbr";
                cbrJump.operators = {
                    ILOCOperator(lastOperatorResult.name, ILOCOperatorType::REGISTER, true)
                };

                if (jumpToTrueLabel) {
                    cbrJump.outOperators = {
                        ILOCOperator(trueLabel, ILOCOperatorType::LABEL, true),
                        ILOCOperator(nextOperationJumpLabel, ILOCOperatorType::LABEL, true),
                    };
                } else {
                    cbrJump.outOperators = {
                        ILOCOperator(nextOperationJumpLabel, ILOCOperatorType::LABEL, true),
                        ILOCOperator(falseLabel, ILOCOperatorType::LABEL, true),
                    };
                }

                iloc->operations.push_back(cbrJump);
            }

        }
    }

    std::vector<ILOCInstruction*>& getInstructionsList() {
        return instructions;
    }

private:
    std::vector<ILOCInstruction*> instructions;

    std::string getMainFunctionLabel() {
        bool found = false;
        ILOCOperation operationFound = instructions[0]->operations[0];
        for (ILOCInstruction* inst : instructions) {
            for (const ILOCOperation& operation : inst->operations) {
                if (operation.mainFunction) {
                    found = true;
                    operationFound = operation;
                    break;
                }
            }
        }

        return operationFound.label;
    }
};

#endif /* ILOC_H */