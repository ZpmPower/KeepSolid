#include "Type3.h"
#include <iostream>

Type3::Type3(const std::string &str1, const std::string &str2, int32_t n, int32_t n2, int32_t n3, double numberDouble)
    : Type(str1,str2,n), numberInt2_(n2), numberInt3_(n3), numberDouble_(numberDouble)
{

}

Type3::Type3(const Type3 &type) : Type(type)
{
    numberInt2_ = type.numberInt2_;
    numberInt3_ = type.numberInt3_;
    numberDouble_ = type.numberDouble_;
}

Type3 &Type3::operator=(const Type3 &type)
{
    if (this != &type)
    {
        Type::operator =(type);
        numberInt2_ = type.numberInt2_;
        numberInt3_ = type.numberInt3_;
        numberDouble_ = type.numberDouble_;
    }
    else {
        std::cout << "Самоприсваивание" << std::endl;
    }
    return *this;
}

Type3::~Type3() {}

void Type3::info()
{
    Type::info();

    std::cout << "Integer1 = " + std::to_string(numberInt2_) << std::endl;
    std::cout << "Integer2 = " + std::to_string(numberInt3_) << std::endl;
    std::cout << "Double number = " + std::to_string(numberDouble_) + '\n'<< std::endl;
}
