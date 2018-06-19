#include "Helper.h"

int32_t Helper::getRandomInt(int32_t min, int32_t max)
{
    int number = min + (rand() % static_cast<int>(max - min + 1)) ;
    return number;
}

std::string Helper::getRandomString(int32_t len)
{
    std::string s;
    static const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return s;
}

double Helper::getRandomDouble(double min, double max)
{
    double f = (double) rand() / RAND_MAX;
    return min + f * (max - min);
}

std::vector<point> Helper::getRandomPoints(int pointsNumber)
{
    std::vector<point> v;
    for (size_t i=0; i<pointsNumber; i++)
    {
        int number1 = getRandomInt(10,25);
        int number2 = getRandomInt(1,10);
        std::pair<int,int> p(number1,number2);
        v.push_back(p);
    }
    return v;
}
