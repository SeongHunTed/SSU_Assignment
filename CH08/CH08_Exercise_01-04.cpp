#include <iostream>
#include <memory>
#include <time.h>
using namespace std;

class Point
{
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) { }
    void setX(int x) { this->x = x;}
    void setY(int y) { this->y = y;}
    int getX() const {return x;}
    int getY() const {return y;}
};

int main()
{   
    Point *const p = new Point(100,200);
    p->setX(30);
    p->setY(60);
    delete p;
    return 0;
}