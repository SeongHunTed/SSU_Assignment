#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    double xval, yval;
public:
    Point(double x = 0.0, double y = 0.0) {}
    double getX() { return xval; }
    double getY() { return yval; }
    void setX(double x) { this->xval = x;}
    void setY(double y) { this->yval = y;}

    double dist(Point other)
    {
        double xd = xval - other.xval;
        double yd = yval - other.yval;
        return sqrt(xd*xd + yd*yd);
    }

    Point add(Point b)
    {
        return Point(xval + b.xval, yval + b.yval);
    }

    Point sub(Point b)
    {
        return Point(xval - b.xval, yval - b.yval);
    }

    void print()
    {
        cout << "(" << xval << "," << yval << ")" << endl;
    }
};

void swap(Point& p1, Point& p2)
{
    Point temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    Point a(1.2, -2.8);
    Point b(3.0, 6.0);

    a.print();
    b.print();
    swap(a, b);
    a.print();
    b.print();

}
