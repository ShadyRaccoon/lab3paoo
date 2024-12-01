#include <iostream>
#include <string>

class item12BASE{
public:
    item12BASE(int height = 0, int width = 0);
    item12BASE(const item12BASE& other);
    ~item12BASE();
    void printItem(std::string numeObj);
protected:
    int height;
    int width;
};

class item12DERIVED : public item12BASE{
public:
    item12DERIVED(int height = 0, int width = 0, int depth = 0);
    item12DERIVED(const item12DERIVED& other);
    ~item12DERIVED();
    void printItem(std::string numeObj);
private:
    int depth;
}; 