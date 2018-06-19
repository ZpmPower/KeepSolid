#include "FactoryTypes.h"
#include "Helper.h"

typedef std::pair <int,int> point;


Type *FactoryTypes::createType(Type_ID id) // Реализация параметризированного фабричного метода
{
    Type* type;
    int32_t generalInt = Helper::getRandomInt(1,20);
    std::string string1 = Helper::getRandomString(20);
    std::string string2 = Helper::getRandomString(20);
    switch (id)
    {
        case Type_ID::Type1_ID:
        {
            type = new Type1(string1, string2, generalInt);
            break;
        }
        case Type_ID::Type2_ID:
        {
            std::vector<point> points = Helper::getRandomPoints(5);
            type = new Type2(string1, string2, generalInt, points);
            break;
        }
        case Type_ID::Type3_ID:
        {
            int32_t randomInt1 = Helper::getRandomInt(10,20);
            int32_t randomInt2 = Helper::getRandomInt(20,30);
            double randomDouble = Helper::getRandomDouble(1,10);
            type = new Type3(string1, string2, generalInt,randomInt1,randomInt2, randomDouble);
            break;
        }
    }
    return type;
}
