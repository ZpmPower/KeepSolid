#ifndef TYPE2_H
#define TYPE2_H

#include "Type.h"
#include <vector>


typedef std::pair <int,int> point;


class Type2 : public Type
{
public:
    Type2(const std::string &str1, const std::string &str2, int32_t n, std::vector<point>& points);
    Type2(const Type2& type);
    Type2& operator=(const Type2& type);
    ~Type2();

    void info();
private:
    std::vector<point> points_;
};

#endif // TYPE2_H
