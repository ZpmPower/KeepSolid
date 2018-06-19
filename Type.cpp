#include "Type.h"
#include <iostream>

Type::Type(const std::string& str1, const std::string& str2, int32_t n)
{
    firstString_ = str1;
    secondString_ = str2;
    numberInt_ = n;
}

Type::Type(const Type& type)
{
    firstString_ = type.getFirstString();
    secondString_ = type.getSecondString();
    numberInt_ = type.getGeneralNumber();
}

Type &Type::operator=(const Type &type)
{
    if (this != &type) {
        firstString_ = type.getFirstString();
        secondString_ = type.getSecondString();
        numberInt_ = type.getGeneralNumber();
    }
    else {
        std::cout << "Самоприсваивание" << std::endl;
    }
    return *this;

}

Type::~Type()
{

}

void Type::info()
{
    std::cout << "General int = " + std::to_string(getGeneralNumber()) << std::endl;
    std::cout << "String1 = " + getFirstString() << std::endl;
    std::cout << "String2 = " + getSecondString() << std::endl;
}
