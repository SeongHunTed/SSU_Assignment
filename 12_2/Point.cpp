#include "Point.h"
#include <iostream>
using namespace std;

void Point::Print() const
{
    cout << "(" << _x << ", " << _y << ")" << endl;
}

Point::Point()
{
    _x = 0;
    _y = 0;
}

Point::Point(COOR_T x, COOR_T y)
{
    SetX(x);
    SetY(y);
}

Point::Point(const Point& pt)
{
    cout << "복사 생성자 호출됨!" << endl;
    _x = pt._x;
    _y = pt._y;
}

void Point::Offset(COOR_T x_delta, COOR_T y_delta)
{
    SetX(_x + x_delta);
    SetY(_y + y_delta);
}

void Point::Offset(const Point& pt)
{
    Offset(pt._x, pt._y);
}

Point Point::operator+(const Point& pt2) const
{
    Point pt;
    pt.SetX(this->_x + pt2._x);
    pt.SetY(this->_y + pt2._y);

    return pt;
}

Point Point::operator-(const Point& pt2) const
{
    Point pt;
    pt.SetX(this->_x - pt2._x);
    pt.SetY(this->_y - pt2._y);    

    return pt;
}