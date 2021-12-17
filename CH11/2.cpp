#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
    int x,y,radius;
    Circle()
    {
        x = y = radius = 0;
    }
    Circle(int x, int y, int radius)
    {
        this->x = x;
        this->y = y;
        this->radius =radius;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
        cout << "r = " << radius << endl;
    }
};

class ColoredCircle : public Circle
{
private:
    string color;
public:
    ColoredCircle(int x, int y, int r, string c)
    {
        this->x = x;
        this->y = y;
        radius = r;
        color = c;
    }
    ~ColoredCircle() {}
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
        cout << "r = " << radius << endl;
        cout << color << endl; 
    }
};

int main()
{
    ColoredCircle c(10,10,50,"red");

    c.print();

}