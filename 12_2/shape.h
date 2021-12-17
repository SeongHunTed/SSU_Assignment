#pragma once
#include "Point.h"

class Shape
{
public:
    void Move(COOR_T x, COOR_T y);
    void Move(const Point& pt);
    virtual void Draw() const;

    Shape();
    Shape(COOR_T x, COOR_T y);
    Shape(const Point& pt);

protected:
    Point _originPt;
};