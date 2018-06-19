#ifndef TYPE1_H
#define TYPE1_H

#include "Type.h"

class Type1 : public Type
{
public:
    Type1(const std::string& str1, const std::string& str2, int32_t n);
    Type1(const Type1 &type);
    Type1& operator=(const Type1& type);
    ~Type1();

    void info();
private:
};

#endif // TYPE1_H
