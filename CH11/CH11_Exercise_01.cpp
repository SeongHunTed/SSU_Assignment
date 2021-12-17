#include <iostream>
#include <string>
using namespace std;

class Fruit
{
public:
    int vitaminMg;
    string typeOfFruit;
};

class Apple : public Fruit
{
public:
    string typeOfApple;
};

class Banana : public Fruit
{
public:
    int LengthOfBanana;
};