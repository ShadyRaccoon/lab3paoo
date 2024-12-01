#include <iostream>
#include "item10.hpp"
#include "item11.hpp"

void separator();
void demoItem10();
void demoItem11();
void demoItem12();

int main(){
    demoItem10();
    separator();

    return 0;
}

void separator(){
    std::cout << "==========================================================================================";
    std::cout << "==========================================================================================";
}

void demoItem10(){
    item10 a(0,0,"white"), b(1,1,"red"), c(2,2,"blue"), d(3,3,"green"), e(4,4,"yellow");
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
    item11 obj1(10, 20, "Red"), obj2(15, 25, "Blue"), obj3(5, 10, "Green");

    obj1.printItem11("obj1");
    obj2.printItem11("obj2");
    obj3.printItem11("obj3");

    obj1 = obj2;
    obj1.printItem11("obj1");

    obj1 += obj3;
    obj1.printItem11("obj1");

    separator();
}