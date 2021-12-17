#include <iostream>
using namespace std;

class Bird
{
public:
    virtual void speak() = 0;
};

class Dove : public Bird
{
public:
    void speak() { cout << "coo coo" << endl;}
};

int main()
{
    Bird *p = new Dove;
    p->speak();

    return 0;
}