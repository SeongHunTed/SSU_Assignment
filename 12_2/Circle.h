#pragma once
#include "shape.h"

class Circle : public Shape
{
public:
    void Draw() const;
    void SetRadius(COOR_T r);

    Circle();
    Circle(COOR_T x, COOR_T y, COOR_T r);
protected:
    COOR_T _radius;
};