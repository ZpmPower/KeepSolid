#ifndef TYPENODE_H
#define TYPENODE_H

#include<Type2.h>
#include<Type3.h>

class TypeNode
{
public:
    TypeNode();
    static void addNode(TypeNode *&tree, Type *type); // метод добавления в дерево узла типа Type
    static void deleteTree(TypeNode* tree); //удаление дерева
    static void printTree(TypeNode* tree); //вывод информации с дерева
    ~TypeNode();
private:
    Type* data_;
    TypeNode *leftNode_, *rightNode_;
};
#endif // TYPENODE_H
