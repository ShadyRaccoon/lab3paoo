#include "item10.hpp"
#include <iostream>
#include <string>

item10::item10(int width, int height, std::string color):
    width(width), height(height), color(color){
    std::cout << "CONSTRUCTOR APELAT!\n" 
        << "OBIECT GENERAT:\n"
        << "INALTIME : " << height << " | "
        << "LATIME : " << width << " | "
        << "CULOARE :" << color << std::endl;
};


item10::item10(const item10& other):
    width(other.width), height(other.height), color(other.color){
        std::cout << "COPY CONSTRUCTOR APELAT!\n";
};

item10::item10(const item10&& other):
    width(other.width), height(other.height), color(other.color){
        std::cout << "MOVE CONSTRUCTOR APELAT!\n"; 
};

item10::~item10(){
    std::cout << "DESTRUCTOR APELAT!\n";
}

item10& item10::operator*=(const item10& opdr){
    std::cout << "ASSIGNMENT OPERATOR *= APELAT!\n"; 
    this->height = 44;
    return *this;
}

item10& item10::operator+=(const item10& opdr){
    std::cout << "ASSIGNMENT OPERATOR += APELAT!\n"; 
    this->height = 22;
    return *this;
}
item10& item10::operator-=(const item10& opdr){
    std::cout << "ASSIGNMENT OPERATOR -= APELAT!\n"; 
    this->height = 33;
    return *this;
}

item10& item10::operator=(const item10& opdr){
    std::cout << "ASSIGNMENT OPERATOR = APELAT!\n"; 
    this->height = 11;
    return *this;
}