#include <iostream>
using namespace std;

class MyClass
{

public:
    MyClass(const char* str);
    ~MyClass();

private:
    char* stored;

};

MyClass::MyClass(const char* str)
{
    stored = new char[strlen(str) + 1];
    strcpy(stored, str);
}

MyClass::~MyClass()
{
    delete[] stored;
}

MyClass::MyClass(const MyClass& another)
{
    stored = new char[strlen(another.stored) + 1];
    strcpy(stored, another.stored);
}