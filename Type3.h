#ifndef TYPE3_H
#define TYPE3_H

#include "Type.h"

class Type3 : public Type
{
public:
    Type3(const std::string &str1, const std::string &str2, int32_t n, int32_t n2, int32_t n3, double numberDouble);
    Type3(const Type3& type);
    Type3& operator=(const Type3& type);
    ~Type3();

    void info();
private:
    int32_t numberInt2_;
    int32_t numberInt3_;
    double numberDouble_;
};

#endif // TYPE3_H
