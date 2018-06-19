#include <iostream>
#include "TypeNode.h"
#include "FactoryTypes.h"
#include "Helper.h"

using namespace std;

int main()
{
    srand(time(nullptr));
    TypeNode *root = nullptr;
    for(size_t i=0; i<3; i++) //создание 3-х указателей на Type1 и добавление в дерево
    {
        Type* type = FactoryTypes::createType(Type_ID::Type1_ID);
        TypeNode::addNode(root, type);
    }
    for(size_t i=0; i<2; i++) //создание 2-х указателей на Type2 и добавление в дерево
    {
        Type* type = FactoryTypes::createType(Type_ID::Type2_ID);
        TypeNode::addNode(root, type);
    }
    for(size_t i=0; i<4; i++) //создание 4-х указателей на Type3 и добавление в дерево
    {
        Type* type = FactoryTypes::createType(Type_ID::Type3_ID);
        TypeNode::addNode(root, type);
    }

    TypeNode::printTree(root); // печать дерева
    TypeNode::deleteTree(root); // удаление дерева
    return 0;
}


