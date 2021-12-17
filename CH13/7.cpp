#include <iostream>
using namespace std;

template<typename T>
class Circle
{
private:
    T radius;
    T x, y;
public:
    Circle() {x=y=radius= 0;}
    Circle(T x, T y, T r) {this->x = x, this->y = y, radius = r;}
    void setX(T x) {this->x = x;}
    void setY(T y) {this->y = y;}
    void setR(T r) { radius = r;}
    T getX() {return x;}
    T getY() {return y;}
    T getR() {return radius;}
    T getArea() { return radius*radius*3.14;}
};

int main()
{
    Circle<int> c1(0,0, 10);
    Circle<double> c2(2.0, 2.0, 7.7);

    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
}