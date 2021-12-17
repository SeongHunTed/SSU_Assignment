#include <iostream>
using namespace std;

class Circle
{
public:
    int x, y;
    int radius;
    Circle() : x(0), y(0), radius(0) {}
    Circle(int x, int y, int r) : x(x), y(y), radius(r) {}
    void print() { cout << "Circle(" << radius << ")" << endl; }
};

Circle getLagerCircle(Circle c1, Circle c2)
{
    if(c1.radius > c2.radius)
    {
        return c1;
    }
    else return c2;
}

int main()
{
    Circle c1(0, 0, 10);
    Circle c2(0, 0, 20);

    c1.print();
    c2.print();

    cout << "더 큰 원은 다음과 같다. " << endl;
    Circle c = getLagerCircle(c1, c2);
    c.print();

    return 0;
    
}