#ifndef NODE_HH
#define NODE_HH

#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include "LexicalValue.h"
#define TO_STRING(name) #name
#define DEBUG

class Node {

public:
    Node* parent;
    std::vector<Node*> children;
    LexicalValue value;
    std::string nodeName;

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
                printf("%s", value.tokenValue.s);
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
    IdentifierNode(const LexicalValue& value, Node* vectorNotation) : BaseNode(value) {
        if (vectorNotation) 
            children.push_back(vectorNotation);
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
    LocalVariableDeclarationNode(const LexicalValue& value, Node* attribute, Node* declarationType, Node* localVarInit) : BaseNode(value) {
        if (attribute)
            children.push_back(attribute);

        children.push_back(declarationType);

        if (localVarInit)
            children.push_back(localVarInit);

        this->attribute = attribute;
        this->declarationType = declarationType;
        this->localVarInit = localVarInit;
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

    }

};

class InputCommandNode: public BaseNode {
public:
    InputCommandNode(const LexicalValue& value, Node* expression) : BaseNode(value) {
        children.push_back(expression);
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
    }

    virtual void print() {
        printValue();
        printf(" ");
        children[0]->print();
    }
};

class AssignmentCommandNode: public BaseNode {

public:
    AssignmentCommandNode(const LexicalValue& value, Node* identifier, Node* expression) : BaseNode(value) {
        children = {identifier, expression};
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
    GlobalVariableDeclaration(Node* identifier, Node* isStatic, Node* declarationType) : BaseNode() {

        children.push_back(identifier);
        if (isStatic)
            children.push_back(isStatic);
        children.push_back(declarationType);

        this->identifier = identifier;
        this->isStatic = isStatic;
        this->declarationType = declarationType;
    }

    virtual void print() {
        identifier->print();
        if (isStatic) {
            printf(" ");
            isStatic->print();
        }
        printf(" ");
        declarationType->print();
        printf(";");
    }

private:
    Node* identifier;
    Node* isStatic;
    Node* declarationType;
};

class FunctionDeclarationNode: public BaseNode {

public:
    FunctionDeclarationNode(
        const LexicalValue& value, 
        Node* isStatic, 
        Node* declarationType,
        Node* listOfParametersDeclaration,
        Node* commandBlock) : BaseNode(value) 
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

class ParametersDeclarationList: public BaseNode {
public:
    ParametersDeclarationList(Node* parameterDeclaration, Node* parameterDeclarationList) : BaseNode() {
        children.push_back(parameterDeclaration);
        children.push_back(parameterDeclarationList);
    }

    virtual void print() {
        children[0]->print();
        printf(",");
        children[1]->print();
    }
};

class ParameterDeclaration: public BaseNode {

public:
    ParameterDeclaration(const LexicalValue& value, Node* isConst, Node* declarationType) : BaseNode(value) {

        if (isConst) 
            children.push_back(isConst);

        children.push_back(declarationType);

        this->isConst = isConst;
        this->declarationType = declarationType;
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
    FunctionCallCommandNode(const LexicalValue& value, Node* parametersList) : BaseNode(value) {
        if (parametersList) {
            children.push_back(parametersList);
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