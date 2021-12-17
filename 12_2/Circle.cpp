#include "Circle.h"
#include <iostream>
using namespace std;

void Circle::Draw() const
{
    cout << "[Circle] Position = " << _originPt.toString() << " Radius = " << _radius << endl;
}

void Circle::SetRadius(COOR_T r)
{
    _radius = r;
}

Circle::Circle()
{
    _radius = 100.0;
}

Circle::Circle(COOR_T x, COOR_T y, COOR_T r)
    : Shape(x, y)
{
    SetRadius(r);
}
