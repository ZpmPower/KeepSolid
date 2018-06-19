#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <vector>


typedef std::pair <int,int> point;


class Helper // вспомогательный класс, содержащий статитеские методы
{
public:
    static int32_t getRandomInt(int32_t min, int32_t max);
    static std::string getRandomString(int32_t len);
    static std::vector<point> getRandomPoints(int pointsNumber);
    static double getRandomDouble(double min, double max);

};

#endif // HELPER_H
