#include <iostream>
#include <string>

class item11{
public:
    item11(int height, int width, const char* code);
    item11(const item11& other);
    ~item11();

    item11& operator=(item11& other);
    item11& operator+=(item11& other);

    void swap(item11 &other);
    
    void printItem11(std::string numeObj){
        std::cout << "obj " << numeObj << ":\n" << "inaltime : " << this->height << " | latime : " << this->width << " | culoare : " << this->colorCode << std::endl;
    }
private:
    int height;
    int width;
    char* colorCode;
};