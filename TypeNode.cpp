#include "TypeNode.h"
#include <iostream>

TypeNode::TypeNode()
{

}

void TypeNode::addNode(TypeNode *&tree, Type *type)
{
    if (tree == nullptr) { // Если дерева нет - создаем
        tree = new TypeNode();
        tree->data_ = type;
        tree->leftNode_ = nullptr;
        tree->rightNode_ = nullptr;
    }
    else
        if(type->getGeneralNumber() <= tree->data_->getGeneralNumber()) // если NumberInt нового узла <= меньше
                                                                        // тогда добавляем в левый узел
        {
            if(tree->leftNode_ != nullptr) addNode(tree->leftNode_, type);
            else
            {
                tree->leftNode_ = new TypeNode();
                tree->leftNode_->leftNode_ = tree->leftNode_->rightNode_ = nullptr;
                tree->leftNode_->data_ = type;
            }
        }
        else // иначе в правый
        {
            if(tree->rightNode_ != nullptr) addNode(tree->rightNode_, type);
            else
            {
                tree->rightNode_ = new TypeNode();
                tree->rightNode_->leftNode_ = tree->rightNode_->rightNode_ = nullptr;
                tree->rightNode_->data_ = type;
            }
        }
}

void TypeNode::deleteTree(TypeNode *tree)
{
    if (tree!=nullptr)
    {
        deleteTree(tree->leftNode_); // Рекурсивная функция прохода по левому поддереву
        deleteTree(tree->rightNode_); // Рекурсивная функция прохода по правому поддереву
        delete tree;  // Удаление конечного элемента дерева
        tree = nullptr;
    }
}

void TypeNode::printTree(TypeNode *tree)
{
    if(tree != nullptr) {
        printTree(tree->leftNode_); // Рекурсивная функция для вывода левого поддерева
        tree->data_->info(); // Отображание корня дерева
        printTree(tree->rightNode_); // Рекурсивная функция для вывода правого поддерева
    }
}

TypeNode::~TypeNode()
{
    if (data_ != nullptr) delete(data_);
    if (leftNode_ != nullptr) delete(leftNode_);
    if (rightNode_ != nullptr) delete(rightNode_);
}

