#include <iostream>
#include <string>
#include "item12.hpp"

item12BASE::item12BASE(int width, int height):
    width(width), height(height){
    std::cout << "CONSTRUCTOR APELAT!\n";
}

item12BASE::item12BASE(const item12BASE& other):
    width(other.width), height(other.height){
    std::cout << "COPY CONSTRUCTOR APELAT!\n";
}

item12BASE::~item12BASE(){
    std::cout << "DESTRUCTOR APELAT!\n";
}

void item12BASE::printItem(std::string numeObj){
    std::cout << numeObj << " || inaltime: " << this->height << " || latime: " << this->width << std::endl;
}

item12DERIVED::item12DERIVED(int h, int w, int d): 
    item12BASE(h, w), depth(d){
    std::cout << "CONSTRUCTOR CLASA DERIVATA APELAT!\n";
}

item12DERIVED::item12DERIVED(const item12DERIVED& other): 
    item12BASE(other), depth(other.depth){
    std::cout << "COPY CONSTRUCTOR CLASA DERIVATA APELAT!\n";
}

item12DERIVED::~item12DERIVED(){
    std::cout << "DESTRUCTOR CLASA DERIVATA APELAT!\n";
}

void item12DERIVED::printItem(std::string numeObj){
    item12BASE::printItem(numeObj);
    std::cout << " || adancime: " << this->depth <<std::endl;
}