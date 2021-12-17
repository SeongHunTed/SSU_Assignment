#pragma once
#include "shape.h"

class Rectangle :
    public Shape
{
public:
    void Draw() const;
    void Resize(COOR_T width, COOR_T height);

    Rectangle();
    Rectangle(COOR_T x, COOR_T y, COOR_T width, COOR_T height);
protected:
    COOR_T _width;
    COOR_T _height;
};