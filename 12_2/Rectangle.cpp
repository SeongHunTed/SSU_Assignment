#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::Draw() const
{
    cout << "[Rectangle] Position = " << _originPt.toString() << " Size = (" << _width << ", " << _height << ")" << endl;
}

void Rectangle::Resize(COOR_T width, COOR_T height)
{
    _width = width;
    _height = height;
}

Rectangle::Rectangle()
{
    _width = _height = 100;
}

Rectangle::Rectangle(COOR_T x, COOR_T y, COOR_T width, COOR_T height) : Shape(x,y)
{
    Resize(width, height);
}