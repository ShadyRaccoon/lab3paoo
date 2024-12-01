#include <iostream>
#include <string>

class item10{
public:
    //constructors & destructor
    item10(int width, int height, std::string color);
    item10(const item10& other);
    item10(const item10&& other);
    ~item10();

    item10& operator=(const item10& opdr);
    item10& operator+=(const item10& opdr);
    item10& operator-=(const item10& opdr);
    item10& operator*=(const item10& opdr);
private:
    int width;
    int height;
    std::string color;
};