#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef int COOR_T;
enum {MIN_X = 0, MAX_X = 300, MIN_Y = 0, MAX_Y = 300};

class Point
{
private:
    COOR_T _x;
    COOR_T _y;
public:
    void Print() const;
    Point();
    Point(COOR_T x, COOR_T y);
    Point(const Point& pt);

    void SetX(COOR_T value);
    void SetY(COOR_T value);
    COOR_T GetX() const {return _x;}
    COOR_T GetY() const {return _y;}

    void Offset(COOR_T x_delta, COOR_T y_delta);
    void Offset(const Point& pt);

    Point operator+(const Point& pt2) const;
    Point operator-(const Point& pt2) const;

    string toString() const
    {
        return "(" + to_string(_x) + ", " + to_string(_y) + ")";
    }


};

inline void Point::SetX(COOR_T value)
{
    if(value < MIN_X) _x = MIN_X;
    else if(value > MAX_X) _x = MAX_X;
    else _x = value;
}

inline void Point::SetY(COOR_T value)
{
    if(value < MIN_Y) _y = MIN_Y;
    else if(value > MAX_Y) _y = MAX_Y;
    else _y = value;
}