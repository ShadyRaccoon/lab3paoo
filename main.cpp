#include <iostream>
#include "item10.hpp"
#include "item11.hpp"
#include "item12.hpp"

void separator();
void demoItem10();
void demoItem11();
void demoItem12();

int main(){
    demoItem10();
    separator();
    demoItem11();
    separator();
    demoItem12();
    return 0;
}

void separator(){
    std::cout << "==========================================================================================\n";
    std::cout << "==========================================================================================\n";
}

void demoItem10(){
    item10 a(0,0,"white");
    item10 b(1,1,"red");
    item10 c(2,2,"blue");
    item10 d(3,3,"green");
    item10 e(4,4,"yellow");
    a.printItem10("a");
    b.printItem10("b");
    c.printItem10("c");
    d.printItem10("d");
    e.printItem10("e");
    a = b;
    a.printItem10("a");
    a += c;
    a.printItem10("a");
    a -= d;
    a.printItem10("a");
    a*= e;    
    a.printItem10("a");
}

void demoItem11(){
    item11 obj1(10, 20, "Red");
    item11 obj2(15, 25, "Blue");
    item11 obj3(5, 10, "Green");

    obj1.printItem11("obj1");
    obj2.printItem11("obj2");
    obj3.printItem11("obj3");

    obj1 = obj2;
    obj1.printItem11("obj1");

    obj1 += obj3;
    obj1.printItem11("obj1");

    separator();
}

void demoItem12(){
    item12BASE b1(1,1), b2(2,2);
    b1.printItem("b1");
    b2.printItem("b2");
    b1 = b2;
    b1.printItem("b1");
    b2.printItem("b2");

    item12DERIVED d1(3,3,3), d2(4,4,4);
    d1.printItem("d1");
    d2.printItem("d2");
    d1 = d2;
    d1.printItem("d1");
    d2.printItem("d2");
}