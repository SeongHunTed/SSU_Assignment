#include <iostream>
using namespace std;

class Weapon
{
public:
    virtual void print() { cout << "무기가 설치됨" << endl;}
};

class Bomb : public Weapon
{
public:
    void print() { cout << "폭탄이 설치됨" << endl;}
};

class Gun : public Weapon
{
public:
    void print() { cout << "총이 설치됨" << endl;}
};

int main()
{
    Weapon *w = new Weapon;
    Weapon *b = new Bomb;
    Weapon *g = new Gun;

    w->print();
    b->print();
    g->print();

    return 0;
}