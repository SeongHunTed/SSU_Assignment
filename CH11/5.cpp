#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
    int x, y;
    string color;
public:
    Shape() { x = y = 0, color = "";}
    Shape(int x, int y, string c)
    {
        this->x = x;
        this->y = y;
        color = c;
    }
    int getArea() {return x*y;}
};

class Circle: public Shape
{
private:
    int radius;
public:
    Circle() {x = y = radius = 0, color = "";}
    Circle(int x, int y, int r, string c)
    {
        Shape(x,y,c);
        radius = r;
    }
    double getArea() {return radius * radius * 3.14;}
};

int main()
{
    Circle c(10,10, 20, "blue");
    cout << c.getArea() << endl;
}