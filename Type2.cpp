#include "Type2.h"
#include <iostream>

Type2::Type2(const std::string &str1, const std::string &str2, int32_t n, std::vector<point>& points) : Type(str1,str2,n)
{
    for(point p : points)
    {
        points_.emplace_back(p);
    }
}

Type2::Type2(const Type2 &type) : Type(type)
{
    points_ = type.points_;
}

Type2 &Type2::operator=(const Type2 &type)
{
    if (this != &type)
    {
        Type::operator =(type);
        points_ = type.points_;
    }
    else {
        std::cout << "Самоприсваивание" << std::endl;
    }
    return *this;
}

Type2::~Type2() {}

void Type2::info()
{
    Type::info();

    std::string str_points;
    for (point p: points_)
    {
        str_points+= '(' + std::to_string(p.first) + ';' + std::to_string(p.second) + ") " ;
    }
    std::cout << "Points = " + str_points + '\n'<< std::endl;
}
