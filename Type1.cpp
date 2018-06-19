#include "Type1.h"
#include <iostream>

Type1::Type1(const std::string &str1, const std::string &str2, int32_t n) : Type(str1,str2,n)
{
}

Type1::Type1(const Type1 &type) : Type(type)
{

}

Type1 &Type1::operator=(const Type1 &type)
{
    if (this != &type)
    {
        Type::operator =(type);
    }
    else {
        std::cout << "Самоприсваивание" << std::endl;
    }
    return *this;
}

Type1::~Type1()
{

}

void Type1::info()
{
    Type::info();
    std::cout << std::endl;
}
