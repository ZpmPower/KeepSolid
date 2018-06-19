#ifndef TYPE_H
#define TYPE_H

#include <string>

class Type // абстрактный класс для Типов(1-3)
{
public:
    Type(const std::string& str1, const std::string& str2, int32_t n);
    Type(const Type &type);
    Type& operator=(const Type& type);
    virtual ~Type();
    virtual void info() = 0;

    int32_t getGeneralNumber() const { return numberInt_; }
    std::string getFirstString() const { return firstString_; }
    std::string getSecondString() const { return secondString_; }
private:
    std::string firstString_;
    std::string secondString_;
    int32_t numberInt_;
};

#endif // TYPE_H
