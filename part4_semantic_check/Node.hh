#ifndef NODE_HH
#define NODE_HH

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include "LexicalValue.h"
#include "SymbolTable.hh"
#define TO_STRING(name) #name
#define DEBUG

extern SymbolTable* pushTempTableAndClear();
extern SymbolTable* getTempTable();
extern SymbolTable* popAndGetPrevious();
extern int get_line_number();
extern void exitWithError(int errorCode);

class Node {

public:
    Node* parent;
    std::vector<Node*> children;
    LexicalValue value;
    std::string nodeName;
    int type;
    Node* restOfTheList = NULL;

    virtual ~Node() {
        freeRecursively();
    }

    void printNodeName() {
        #ifdef DEBUG
        std::cout << " (" << nodeName << ") ";
        #endif
    }

    virtual void print() = 0;


    const Node* setParent(Node* parent) {
        this->parent = parent;        
        return this;
    }

    void applyTypeInferenceRule(Node* left, Node* right) {

        if (left->type == TYPE_INT && right->type == TYPE_INT) {
            type = TYPE_INT;
        } else if (left->type == TYPE_FLOAT && right->type == TYPE_FLOAT) {
            type = TYPE_FLOAT;
        } else if (left->type == TYPE_BOOL && right->type == TYPE_BOOL) {
            type = TYPE_BOOL;
        } else if (
                (left->type == TYPE_FLOAT && right->type == TYPE_INT) ||
                (left->type == TYPE_INT && right->type == TYPE_FLOAT)
            ) {
            type = TYPE_FLOAT;

        } else if (
                (left->type == TYPE_BOOL && right->type == TYPE_INT) ||
                (left->type == TYPE_INT && right->type == TYPE_BOOL)
            ) {
            type = TYPE_INT;

        } else if (
                (left->type == TYPE_BOOL && right->type == TYPE_FLOAT) ||
                (left->type == TYPE_FLOAT && right->type == TYPE_BOOL)
            ) {
            type = TYPE_FLOAT;
        }
    }


    static std::vector<FunctionParameter> getFunctionParametersList(Node* listOfParameters) {
        std::vector<FunctionParameter> functionParameters;
        getFunctionParametersListRecursively(listOfParameters, functionParameters);
        return functionParameters;
    }

    static void getFunctionParametersListRecursively(Node* listOfParameters, std::vector<FunctionParameter>& theList) {
        bool hasParameterToLookAt = listOfParameters && listOfParameters->restOfTheList;

        if (listOfParameters) {
            FunctionParameter parameter;
            parameter.name = listOfParameters->value.tokenValue.s;
            parameter.type = listOfParameters->type;
            parameter.lexical = listOfParameters->value;
            theList.push_back(parameter);
        }

        if (hasParameterToLookAt) {
            getFunctionParametersListRecursively(listOfParameters->restOfTheList, theList);
        }
    }

    static std::vector<FunctionParameter> getFunctionRealParametersList(Node* listOfParameters) {
        std::vector<FunctionParameter> functionParameters;
        getFunctionRealParametersListRecursively(listOfParameters, functionParameters);
        return functionParameters;
    }

    static void getFunctionRealParametersListRecursively(Node* listOfParameters, std::vector<FunctionParameter>& theList) {
        bool hasParameterToLookAt = listOfParameters && listOfParameters->restOfTheList;

        if (listOfParameters) {
            FunctionParameter parameter;
            if (listOfParameters->children.size() > 0) {
                parameter.type = listOfParameters->children[0]->type;
            } else {
                parameter.type = listOfParameters->type;
            }
            theList.push_back(parameter);
        }

        if (hasParameterToLookAt) {
            getFunctionRealParametersListRecursively(listOfParameters->restOfTheList, theList);
        }
    }

    void printValue() {
        switch(value.literalType) {
            case LITERAL_INT:
                printf("%d", value.tokenValue.i);
                break;
            case LITERAL_FLOAT:
                printf("%f", value.tokenValue.f);
                break;
            case LITERAL_BOOL:
                printf(value.tokenValue.b ? "true" : "false");
                break;
            case LITERAL_CHAR:
                printf("\'%c\'", value.tokenValue.c);
                break;
            case LITERAL_STRING:
                printf("\"%s\"", value.tokenValue.s);
                break;
            default:
                printf("%s", value.tokenValue.s);
                break;
        }
    }

private:
    void freeRecursively() {
        for (Node* child : children) {
            delete child;
        }
    }
};

class BaseNode: public Node {

public:
    BaseNode() {
        this->value = {};
        this->nodeName = TO_STRING(BaseNode);
    }

    BaseNode(const LexicalValue& value) {
        this->value = value;
        this->nodeName = TO_STRING(BaseNode);
    }

    virtual void print() {
        printNodeName();
    }
    
};

class LeafNode: public BaseNode {
public:
    LeafNode(const LexicalValue& value) : BaseNode(value) {
        this->value = value;
        this->nodeName = TO_STRING(LeafNode);
    }

    virtual void print() {
        printValue();
        for (auto child : children) {
            child->print();
        }
    }
};

class GenericNode: public BaseNode {

public:
    GenericNode(const LexicalValue& value, std::initializer_list<Node*> childrenToPush) : BaseNode(value) {
        this->nodeName = TO_STRING(GenericNode);
        for (Node* childToPush : childrenToPush) {
            if (childToPush)
                children.push_back(childToPush);
        }
    }

    virtual void print() {
        printValue();
        printf(" ");
        for (Node* child : children) {
            if (child)
                child->print();
        }
    }

};

class IdentifierNode: public BaseNode {
public:
    IdentifierNode(const LexicalValue& identifier) : BaseNode(identifier) {
        getTempTable()->checkDeclarationRecursivelyInPreviousScopes(identifier.tokenValue.s);
        SymbolEntry* identifierEntry = getTempTable()->getEntry(identifier.tokenValue.s);

        if (identifierEntry) {
            type = identifierEntry->type;

            if (identifierEntry->nature == NATUREZA_VECTOR) {
                exitWithError(ERR_VECTOR);
            }
        } else {
            exitWithError(ERR_UNDECLARED);
        }
    }

    virtual void print() {
        printValue();
    }
};

class IdentifierVectorNode: public BaseNode {
public:
    IdentifierVectorNode(const LexicalValue& identifier, Node* vectorNotation) : BaseNode(identifier) {
        children.push_back(vectorNotation);

        getTempTable()->checkDeclarationRecursivelyInPreviousScopes(identifier.tokenValue.s);
        SymbolEntry* identifierEntry = getTempTable()->getEntry(identifier.tokenValue.s);

        type = identifierEntry->type;

        if (identifierEntry->nature == NATUREZA_VARIABLE) {
            exitWithError(ERR_VARIABLE);
        }
    }

    virtual void print() {
        printValue();

        if (children.size() == 1) {
            printf("[");
            children[0]->print();
            printf("]");
        }
    }
};
class CommandBlockNode: public BaseNode {

public:
    CommandBlockNode(Node* listOfCommands) : BaseNode() {
        this->children.push_back(listOfCommands);        
    }

    virtual void print() {
        printf("{");
        if (children[0])
            children[0]->print();
        printf("}");
    }
};

class ValidCommandNode: public BaseNode {
public:
    ValidCommandNode(Node* command) : BaseNode() {
        children.push_back(command);
    }

    virtual void print() {
        printf("\n");
        children[0]->print();
        printf(";");
    }
};

class ListOfCommandsNode: public BaseNode {

public:
    ListOfCommandsNode(Node* restOfTheList, Node* command) : BaseNode() {
        children.push_back(restOfTheList);
        children.push_back(command);
    }

    virtual void print() {
        for (Node* child : children) {
            if (child) {
                child->print();          
            }
        }
    }
};

class VectorNotationNode: public BaseNode {

public:
    VectorNotationNode(Node* expression) : BaseNode() {
        children.push_back(expression);
    }

    virtual void print() {
        printf("[");
        children[0]->print();
        printf("]");
    }
};

class LocalVariableDeclarationNode: public BaseNode {

public:
    LocalVariableDeclarationNode(const LexicalValue& identifier, Node* attribute, Node* declarationType, Node* localVarInit) : BaseNode(identifier) {
        if (attribute)
            children.push_back(attribute);

        children.push_back(declarationType);

        if (localVarInit)
            children.push_back(localVarInit);

        this->attribute = attribute;
        this->declarationType = declarationType;
        this->localVarInit = localVarInit;

        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        getTempTable()->insertVariableDeclaration(identifier, type);
        getTempTable()->updateTypeSize(identifier, declarationType->value.literalSize);
    }

    virtual void print() {
        if (attribute) {
            attribute->print();
            printf(" ");
        }

        declarationType->print();
        printf(" ");

        printValue();

        if (localVarInit) {
            localVarInit->print();
        }
    }

private:
    Node* attribute;
    Node* declarationType;
    Node* localVarInit;

};

class LocalVariableDeclarationAttributeNode: public BaseNode {
public:
    LocalVariableDeclarationAttributeNode(const LexicalValue& value, Node* isStatic) : BaseNode(value) {
        if (isStatic) 
            children.push_back(isStatic);
    }

    virtual void print() {
        for (Node* child : children) {
            if (child) {
                child->print();
                printf(" ");
            }
        }

        printValue();
    }
};

class LiteralNode: public LeafNode {

public:
    LiteralNode(const LexicalValue& value) : LeafNode(value) {

        switch(value.literalType) {
            case LITERAL_INT:
                type = TYPE_INT;
                break;
            case LITERAL_FLOAT:
                type = TYPE_FLOAT;
                break;
            case LITERAL_BOOL:
                type = TYPE_BOOL;
                break;
            case LITERAL_CHAR:
                type = TYPE_CHAR;
                break;
            case LITERAL_STRING:
                type = TYPE_STRING;
                break;
            default:
                type = TYPE_ERROR;
                break;
        }
    }

};

class InputCommandNode: public BaseNode {
public:
    InputCommandNode(const LexicalValue& value, Node* expression) : BaseNode(value) {
        children.push_back(expression);
        char* identifierName = expression->value.tokenValue.s;
        SymbolEntry* entry = identifierName ? getTempTable()->getEntry(identifierName) : NULL;

        bool existsEntryAndItIsVariableOrVector = entry && (entry->nature == NATUREZA_VARIABLE || entry->nature == NATUREZA_VECTOR);
        if (!existsEntryAndItIsVariableOrVector) {
            exitWithError(ERR_WRONG_PAR_INPUT);
        }
    }

    virtual void print() {
        printValue();
        printf(" ");
        children[0]->print();
    }
};

class OutputCommandNode: public BaseNode {
public:
    OutputCommandNode(const LexicalValue& value, Node* parametersList) : BaseNode(value) {
        children.push_back(parametersList);

        auto parametersVector = getFunctionRealParametersList(parametersList);
        
        for (auto parameter : parametersVector) {
            bool isNotPermittedTypeToOutput = parameter.type == TYPE_CHAR;
            if (isNotPermittedTypeToOutput) {
                exitWithError(ERR_WRONG_PAR_OUTPUT);
            }
        }

    }

    virtual void print() {
        printValue();
        printf(" ");
        children[0]->print();
    }
};

class ReturnCommandNode: public BaseNode {
public:
    ReturnCommandNode(const LexicalValue& value, Node* expression) : BaseNode(value) {
        children.push_back(expression);

        type = expression->type;
        bool returnExpressionTypeIsDifferentFromFunctionReturnType = getTempTable()->activationRegistry->function->type != type;

        if (returnExpressionTypeIsDifferentFromFunctionReturnType) {
            exitWithError(ERR_WRONG_PAR_RETURN);
        }
    }

    virtual void print() {
        printValue();
        printf(" ");
        children[0]->print();
    }
};

class AssignmentCommandNode: public BaseNode {

public:
    AssignmentCommandNode(const LexicalValue& value, Node* identifier, Node* rightValue) : BaseNode(value) {
        children = {identifier, rightValue};

        getTempTable()->checkDeclarationRecursivelyInPreviousScopes(identifier->value.tokenValue.s);
        type = getTempTable()->getTypeOfDeclaration(identifier->value);
        
        SymbolEntry* identifierEntry = getTempTable()->getEntry(identifier->value.tokenValue.s);
        
        if (identifierEntry->type == TYPE_STRING) {
            int sizeOfString = 1 * strlen(rightValue->value.tokenValue.s);
            getTempTable()->updateTypeSize(identifier->value, sizeOfString);
        }

        bool identifierIsVector = identifier->children.size() > 0;

        if (
            (identifierEntry->nature != NATUREZA_VECTOR && identifierIsVector) ||
            (identifierEntry->nature == NATUREZA_VECTOR && !identifierIsVector)
         ) {
            exitWithError(ERR_VECTOR);
        } else {
            bool typeCharDoesntMatch = 
                (rightValue->type == TYPE_CHAR && identifierEntry->type != TYPE_CHAR) ||
                (rightValue->type != TYPE_CHAR && identifierEntry->type == TYPE_CHAR);

            bool typeStringDoesntMatch =
                (rightValue->type == TYPE_STRING && identifierEntry->type != TYPE_STRING) ||
                (rightValue->type != TYPE_STRING && identifierEntry->type == TYPE_STRING);


            if (typeCharDoesntMatch) {
                exitWithError(ERR_CHAR_TO_X);
            } else if (typeStringDoesntMatch) { 
                exitWithError(ERR_STRING_TO_X);
            }
        }
    }

    virtual void print() {
        children[0]->print();
        printValue();
        children[1]->print();
    }
};

class ShiftCommand: public BaseNode {

public:
    ShiftCommand(const LexicalValue& value, Node* identifier, Node* expression) : BaseNode(value) {
        children.push_back(identifier);
        children.push_back(expression);
    }

    virtual void print() {
        children[0]->print();
        printValue();
        printf("(");
        children[1]->print();
        printf(")");
    }
};

class IfThenCommandNode: public BaseNode {

public:
    IfThenCommandNode(const LexicalValue& value, Node* expression, Node* blockIf) : BaseNode(value) {
        children.push_back(expression);
        children.push_back(blockIf);
    }

    virtual void print() {
        printValue();
        printf("(");
        children[0]->print();
        printf(")");
        printf(" then ");
        children[1]->print();
    }

};

class IfThenElseCommandNode: public BaseNode {

public:
    IfThenElseCommandNode(const LexicalValue& value, Node* expression, Node* blockIf, Node* blockElse) : BaseNode(value) {

        children.push_back(expression);
        children.push_back(blockIf);
        children.push_back(blockElse);
    }

    virtual void print() {
        printValue();
        printf("(");
        children[0]->print();
        printf(")");
        printf(" then ");
        children[1]->print();
        printf(" else ");
        children[2]->print();
    }
};

class ForCommandNode: public BaseNode {

public:
    ForCommandNode(const LexicalValue& value, Node* forList, Node* expression, Node* forListAfter, Node* commandBlock) : BaseNode(value) {
        children.push_back(forList);
        children.push_back(expression);
        children.push_back(forListAfter);
        children.push_back(commandBlock);
    }

    virtual void print() {
        printValue();
        printf("(");
        children[0]->print();
        printf(":");
        children[1]->print();
        printf(":");
        children[2]->print();
        printf(")");
        children[3]->print();
    }
};

class WhileCommandNode: public BaseNode {

public:
    WhileCommandNode(const LexicalValue& value, Node* expression, Node* commandBlock) : BaseNode(value) {
        children.push_back(expression);
        children.push_back(commandBlock);
    }

    virtual void print() {
        printValue();
        printf("(");
        children[0]->print();
        printf(")");
        printf(" do ");
        children[1]->print();
    }
};

class ListOfDeclarations: public BaseNode {

public:
    ListOfDeclarations(Node* declarationList, Node* declaration) : BaseNode() {
        children.push_back(declarationList);
        children.push_back(declaration);
    }

    virtual void print() {
        children[0]->print();
        printf("\n");
        children[1]->print();
    }
};

class GlobalVariableDeclaration: public BaseNode {

public:
    GlobalVariableDeclaration(LexicalValue& identifier, Node* isStatic, Node* declarationType) : BaseNode(identifier) {
        
        if (isStatic) children.push_back(isStatic);
        children.push_back(declarationType);

        this->isStatic = isStatic;
        this->declarationType = declarationType;
        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        getTempTable()->insertVariableDeclaration(identifier, type);

        if (type != TYPE_STRING) {
            getTempTable()->updateTypeSize(identifier, declarationType->value.literalSize);
        }
    }

    virtual void print() {
        
        printValue();

        if (isStatic) {
            printf(" ");
            isStatic->print();
        }
        printf(" ");
        declarationType->print();
        printf(";");
    }

private:
    Node* isStatic;
    Node* declarationType;
};

class GlobalVectorVariableDeclaration: public BaseNode {

public:
    GlobalVectorVariableDeclaration(LexicalValue& identifier, Node* literalInteger, Node* isStatic, Node* declarationType) : BaseNode(identifier) {
        

        if (isStatic) this->children.push_back(isStatic);
        this->children.push_back(literalInteger);
        this->children.push_back(declarationType);

        this->isStatic = isStatic;
        this->literalInteger = literalInteger;
        this->declarationType = declarationType;

        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        getTempTable()->insertVectorDeclaration(identifier, type);

        if (type != TYPE_STRING) {
            int numberOfElements = literalInteger->value.tokenValue.i;
            int vectorSizeInMemory = declarationType->value.literalSize * numberOfElements;
            getTempTable()->updateTypeSize(identifier, vectorSizeInMemory);
        }
    }

    virtual void print() {
        printValue();
        printf("[");
        this->literalInteger->print();
        printf("]");

        if (isStatic) {
            printf(" ");
            isStatic->print();
        }
        printf(" ");
        this->declarationType->print();
        printf(";");
    }

private:
    Node* literalInteger;
    Node* isStatic;
    Node* declarationType;
};

class FunctionDeclarationNode: public BaseNode {

public:
    FunctionDeclarationNode(
        const LexicalValue& identifier, 
        Node* isStatic, 
        Node* declarationType,
        Node* listOfParametersDeclaration,
        Node* commandBlock) : BaseNode(identifier) 
    {
        if (isStatic)
            children.push_back(isStatic);
        
        children.push_back(declarationType);

        if (listOfParametersDeclaration)
            children.push_back(listOfParametersDeclaration);
        
        if (commandBlock)
            children.push_back(commandBlock);

        this->isStatic = isStatic;
        this->declarationType = declarationType;
        this->listOfParametersDeclaration = listOfParametersDeclaration;
        this->commandBlock = commandBlock;
        
        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        auto functionParameters = Node::getFunctionParametersList(listOfParametersDeclaration);

        getTempTable()->insertFunctionDeclaration(identifier, type, functionParameters);
    }


    virtual void print() {
        
        if (isStatic) {
            isStatic->print();
            printf(" ");
        }
        declarationType->print();
        printf(" ");
        printValue();
        
        if (listOfParametersDeclaration) {
            printf("(");
            listOfParametersDeclaration->print();
            printf(")");
        }
        else
            printf("()");
        
        if (commandBlock)
            commandBlock->print();
        else
            printf("{}");        
    }

private:
    Node* isStatic;
    Node* declarationType;
    Node* listOfParametersDeclaration;
    Node* commandBlock;

};

class ForParametersDeclarationList: public BaseNode {

public:
    ForParametersDeclarationList(const LexicalValue& value, Node* parameter, Node* restListOfParamenters) : BaseNode(value) {
        children.push_back(parameter);
        children.push_back(restListOfParamenters);
        restOfTheList = restListOfParamenters;
    }

    virtual void print() {
        children[0]->print();
        printf(",");
        children[1]->print();
    }
};

class ParametersDeclarationList: public BaseNode {
public:
    ParametersDeclarationList(const LexicalValue& identifier, Node* isConst, Node* declarationType, Node* parameterDeclarationList) : BaseNode(identifier) {

        if (isConst) 
            children.push_back(isConst);

        children.push_back(declarationType);

        if (parameterDeclarationList)
            children.push_back(parameterDeclarationList);

        this->isConst = isConst;
        this->declarationType = declarationType;
        this->restOfTheList = parameterDeclarationList;

        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        getTempTable()->insertVariableDeclaration(identifier, type);

        if (type != TYPE_STRING) {
            getTempTable()->updateTypeSize(identifier, declarationType->value.literalSize);
        }
    }

    virtual void print() {
        if (isConst) {
            isConst->print();
            printf(" ");
        }
        
        declarationType->print();
        printf(" ");
        printValue();

        printf(",");
        restOfTheList->print();
        
    }
private:
    Node* isConst;
    Node* declarationType;
};

class ParameterDeclaration: public BaseNode {

public:
    ParameterDeclaration(const LexicalValue& identifier, Node* isConst, Node* declarationType) : BaseNode(identifier) {

        if (isConst) 
            children.push_back(isConst);

        children.push_back(declarationType);

        this->isConst = isConst;
        this->declarationType = declarationType;
        type = getTempTable()->getTypeOfDeclaration(declarationType->value);
        getTempTable()->insertVariableDeclaration(identifier, type);

        if (type != TYPE_STRING) {
            getTempTable()->updateTypeSize(identifier, declarationType->value.literalSize);
        }
    }

    virtual void print() {
        if (isConst) {
            isConst->print();
            printf(" ");
        }
        
        declarationType->print();
        printf(" ");
        printValue();
    }
private:
    Node* isConst;
    Node* declarationType;
};

class ParametersListNode: public BaseNode {

public:
    ParametersListNode(Node* parameter, Node* parametersList) : BaseNode() {
        children.push_back(parameter);
        children.push_back(parametersList);
        restOfTheList = parametersList;
    }

    virtual void print() {
        // printf("(");
        children[0]->print();
        // printf(")");
        printf(",");
        // printf("(");
        children[1]->print();
        // printf(")");
    }
};

class FunctionCallCommandNode: public BaseNode {
public:
    FunctionCallCommandNode(const LexicalValue& identifier, Node* parametersList) : BaseNode(identifier) {
        if (parametersList) {
            children.push_back(parametersList);
        }

        SymbolEntry* identifierEntry = getTempTable()->getEntry(identifier.tokenValue.s);

        if (identifierEntry) {
            if (identifierEntry->nature != NATUREZA_FUNCTION) {
                exitWithError(ERR_FUNCTION);
            }

            auto functionParameters = Node::getFunctionRealParametersList(parametersList);

            if (functionParameters.size() < identifierEntry->parameters.size()) {
                exitWithError(ERR_MISSING_ARGS);
            } else if (functionParameters.size() > identifierEntry->parameters.size()) {
                exitWithError(ERR_EXCESS_ARGS);
            } else if (functionParameters.size() == identifierEntry->parameters.size()) {
                // check types
                for (int i = 0; i < functionParameters.size(); i++) {
                    auto formalParameter = identifierEntry->parameters[i];
                    auto realParameter = functionParameters[i];

                    if (formalParameter.type != realParameter.type) {
                        exitWithError(ERR_WRONG_TYPE_ARGS);
                    }
                }
            }
        } else {
            exitWithError(ERR_UNDECLARED);
        }
    }

    virtual void print() {
        printValue();
        printf("(");
        for (Node* child : children) {
            child->print();
        }
        printf(")");
    }
};

class UnaryExpressionNode: public BaseNode {

public:
    UnaryExpressionNode(const LexicalValue& value, Node* expression) : BaseNode(value) {
        children.push_back(expression);
        type = expression->type;
    }

    virtual void print() {
        printf("(");
        printValue();
        children[0]->print();
        printf(")");
    }
};

class BinaryExpressionNode: public BaseNode {

public:
    BinaryExpressionNode(const LexicalValue& value, Node* left, Node* right) : BaseNode(value) {
        children.push_back(left);
        children.push_back(right);

        if (left->type == TYPE_STRING || right->type == TYPE_STRING) {
            exitWithError(ERR_STRING_TO_X);
        } else if (left->type == TYPE_CHAR || right->type == TYPE_CHAR) {
            exitWithError(ERR_CHAR_TO_X);
        }

        applyTypeInferenceRule(left, right);
    }

    virtual void print() {
        printf("(");
        children[0]->print();
        printValue();
        children[1]->print();
        printf(")");
    }
};


class TernaryExpressionNode: public BaseNode {

public:
    TernaryExpressionNode(const LexicalValue& value, Node* validationExpression, Node* trueExpression, Node* falseExpression) : BaseNode(value) {
        children.push_back(validationExpression);
        children.push_back(trueExpression);
        children.push_back(falseExpression);

        if (
            (trueExpression->type == TYPE_STRING && falseExpression->type != TYPE_STRING) ||
            (trueExpression->type != TYPE_STRING && falseExpression->type == TYPE_STRING)
        ) {
            exitWithError(ERR_STRING_TO_X);
        } else if (
            (trueExpression->type == TYPE_CHAR && falseExpression->type != TYPE_CHAR) ||
            (trueExpression->type != TYPE_CHAR && falseExpression->type == TYPE_CHAR)
        ) {
            exitWithError(ERR_CHAR_TO_X);
        }
        
        applyTypeInferenceRule(trueExpression, falseExpression);
    }

    virtual void print() {
        printf("("); children[0]->print(); printf(")"); printf(" ");
        
        printValue(); printf(" ");
        
        printf("("); children[1]->print(); printf(")");

        printf(" : ");

        printf("("); children[2]->print(); printf(")");
    }
};

#endif /* NODE_HH */