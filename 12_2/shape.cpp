#include "shape.h"
#include <iostream>
using namespace std;

void Shape::Move(COOR_T x, COOR_T y)
{
    _originPt.SetX(y);
    _originPt.SetY(y);
}
void Shape::Move(const Point& pt)
{
    _originPt = pt;
}

void Shape::Draw() const
{
    cout << "[Shape] Position = " << _originPt.toString() << endl;
}

Shape::Shape()
{

}

Shape::Shape(COOR_T x, COOR_T y)
{
    Move(x, y);
}
Shape::Shape(const Point& pt)
{
    Move(pt);
}