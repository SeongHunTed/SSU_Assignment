#include "point.h"
#include <iostream>
using namespace std;

Point::Point()
{
    _x = 0;
    _y = 0;
}

Point::Point(int x, int y) :_x(x), _y(y) {}

void Point::print()
{
    cout << "x : " << _x << " y : " << _y << endl;
}