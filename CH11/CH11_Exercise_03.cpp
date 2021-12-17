#include <iostream>
#include <string>
using namespace std;

class Animal
{
    string name;
public:
    Animal(string name) { cout << "동물(생성자)(string)" << endl;}
    ~Animal() { cout << "동물(소멸자)" << endl;}
};

class Lion : public Animal
{
public:
    Lion(string name) : Animal(name) { cout << "사자(생성자)" << endl;}
    ~Lion() {}
};

int main()
{
    Lion lion1("King");

    return 0;
}