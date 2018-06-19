#ifndef FACTORYTYPES_H
#define FACTORYTYPES_H

#include "Type1.h"
#include "Type2.h"
#include "Type3.h"

enum class Type_ID { Type1_ID = 0, Type2_ID, Type3_ID};

class FactoryTypes // паттерн Factory Method
{
public:
    static Type* createType(Type_ID id); // Параметризированный статический фабричный метод
};

#endif // FACTORYTYPES_H
