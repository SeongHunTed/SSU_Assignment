#include <iostream>
using namespace std;

class Weapon
{
public:
    virtual void load() = 0;
};

class Bomb : public Weapon
{
public:
    void load() { cout << "Bomb loaded!" << endl;}
};

class Gun : public Weapon
{
public:
    void load() { cout << "Gun loaded!" << endl;}
};

int main()
{
    Bomb b;
    Gun g;
    b.load();
    g.load();
}