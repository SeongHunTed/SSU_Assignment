#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void setX(int x) {this->x = x;}
    void setY(int y) {this->y = y;}
    void print()
    {
        cout << "x : " << x << ", y : " << y << endl;
    }
};

class ThreeDPoint : public Point
{
    int z;
public:
    ThreeDPoint()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    ThreeDPoint(const int x, const int y, const int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    ~ThreeDPoint() {}
    int getZ() {return z;}
    void setZ(int z) { this->z = z;}
    void print()
    {
        cout << "x : " << x << ", y : " << y << ", z : " << z << endl; 
    }
    ThreeDPoint operator+(const ThreeDPoint& p2)
    {
        ThreeDPoint p;
        p.x = this->x + p2.x;
        p.y = this->y + p2.y;
        p.z = this->z + p2.z;

        return p;
        
    }
};

int main()
{
    ThreeDPoint p(10,10,10);
    p.print();

    ThreeDPoint p2(20,20,20);
    ThreeDPoint p3 = p + p2;
    p3.print();
    
    return 0;
}