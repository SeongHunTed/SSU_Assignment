#include <iostream>
using namespace std;

class Point2D
{
public:
    int x;
    int y;

    void setX(int x) { this->x = x;}
    void setY(int y) { this->y = y;}
    int getX() {return x;}
    int getY() {return y;}
};

class Point3D : public Point2D
{
public:
    int z;
    void setZ(int z) {this->z = z;}
    int getZ() {return z;}
};

int main()
{
    Point2D *p = new Point3D();

    p->setX(100);
    //(Point3D *)p->setZ(40);
    
    cout << p->getX() << endl;

    delete p;

    return 0;

}