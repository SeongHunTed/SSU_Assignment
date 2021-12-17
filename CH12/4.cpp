#include <iostream>
using namespace std;

class GameCharacter
{
public:
    GameCharacter() {}
    virtual void draw() = 0;
};

class Hobbit : public GameCharacter
{
public:
    Hobbit() { }
    void draw() { cout << "Hobbit draw" << endl;}
};

class Sorcerer : public GameCharacter
{
public:
    Sorcerer() { }
    void draw() { cout << "Sorcere draw" << endl;}
};

int main()
{
    GameCharacter *GC[2];
    GC[0] = new Hobbit();
    GC[1] = new Sorcerer();

    GC[0]->draw();
    GC[1]->draw();

    return 0;
}