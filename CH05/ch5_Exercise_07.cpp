#include <iostream>
#include <string>
using namespace std;

class Character
{   
    int number;
    int x,y;
    double HP;

public:
    Character(){
        number = 0;
        x = 0;
        y = 0;
        HP = 0;
    }
    Character(int pnumber, int px, int py, double pHP){
        number = pnumber;
        x = px;
        y = py;
        HP = pHP;
    }
    int getX(){return x;}
    int getNumber(){ return number;}
    void set(int pnumber, int px, int py, double pHP);
    void moveX();
    void print();
};

void Character::set(int pnumber, int px, int py, double pHP){
    number = pnumber;
    x = px;
    y = py;
    HP = pHP;
}

void Character::moveX(){
    x += 10;
}

void Character::print(){
    cout << "x: " << x << " y: " << y << " HP: " << HP << endl;
}

int main(){
    Character c1;
    c1.set(1,0,0,100);
    cout << "캐릭터 #" << c1.getNumber() << endl;
    while ( c1.getX() <= 90){
        c1.print();
        c1.moveX();
    }

    return 0;
}