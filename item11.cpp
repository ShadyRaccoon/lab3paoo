#include <iostream>
#include <string>
#include <string.h>
#include "item11.hpp"

item11::item11(int height, int width, const char* colorCode):
    height(height), width(width){
        std::cout << "CONSTRUCTOR APELAT!\n";
        this->colorCode = new char[strlen(colorCode) + 1]; 
        strcpy(this->colorCode, colorCode);
}

item11::~item11(){
    std::cout << "DESTRUCTOR APELAT!\n";
    delete[] colorCode;
}

item11::item11(const item11& other):
    height(other.height), width(other.width){
        std::cout << "COPY CONSTRUCTOR APELAT!\n";
        colorCode = new char[strlen(other.colorCode) + 1];
        strcpy(colorCode, other.colorCode);
}

void item11::swap(item11& other) {
    std::swap(height, other.height);
    std::swap(width, other.width);
    std::swap(colorCode, other.colorCode);
}

item11& item11::operator=(item11& other){
    item11::swap(other);
    return *this;
}

item11& item11::operator+=(item11& other){
    if (this != &other) {  
        height += other.height;
        width += other.width;

        char* newColorCode = new char[strlen(colorCode) + strlen(other.colorCode) + 1];
        strcpy(newColorCode, colorCode);
        strcat(newColorCode, other.colorCode);
        
        delete[] colorCode;  
        colorCode = newColorCode;  
    }
    return *this;
}