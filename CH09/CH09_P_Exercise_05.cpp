#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;
public:
    static int count;
public:
    Box(double l = 2.0, double w = 2.0, double h = 2.0)
    {
        length = l;
        width = w;
        height = h;
        count++;
    }
    double Volume()
    {
        return length*width*height;
    }
};

int Box::count = 0;

int main()
{
    Box b1(1.0, 2.0, 3.0);
    Box b2(1.0, 2.0, 5.0);

    cout << Box::count << endl;

    return 0;
}