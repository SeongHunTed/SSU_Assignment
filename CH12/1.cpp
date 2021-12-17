#include <iostream>
using namespace std;

class Shape
{
protected:
    int x,y;
public:
    Shape() { x = y = 0;}
    Shape(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    virtual double getArea() = 0;
};

class Rect : public Shape
{
private:
    int width, height;
public:
    Rect(int x, int y, int w, int h) : Shape(x,y), width(w), height(h)  {}
    double getArea()
    {
        return width * height;
    }
};

class Circle : public Shape
{
private:
    int radius;
public:
    Circle(int x, int y, int r) : Shape(x,y), radius(r) { }
    double getArea()
    {
        return radius * radius * 3.14;
    }
};

class Triangle : public Shape
{
private:
    int width, height;
public:
    Triangle(int x, int y, int w, int h) : Shape(x,y), width(w), height(h)  {}
    double getArea()
    {
        return width * height /2;
    }
};

int main()
{
    Shape *shapes[3];

    shapes[0] = new Rect(10,10,20,30);
    shapes[1] = new Circle(20,20,10);
    shapes[2] = new Triangle(30,30,10,10);

    for(int i = 0; i<3; i++)
    {
        cout << shapes[i]->getArea() << endl;
    }
}