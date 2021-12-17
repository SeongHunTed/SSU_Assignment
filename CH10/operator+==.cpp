#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;
public:
    Box(int l=0, int w=0, int h=0) : length(l), width(w), height(h) { }
    double getVolume(void)
    {
        return length*width*height;
    }
    //더하기 연산자 중복
    Box operator+(const Box& b2)
    {
        Box v;
        v.length = this->length + b2.length;
        v.height = this->height + b2.height;
        v.width = this->width + b2.width;

        return v;
    }

    bool operator==(const Box& b2)
    {
        return(length == b2.length && height == b2.height && width == b2.width);
    }

    bool operator<(Box& b2)
    {
        return(this->getVolume() < b2.getVolume());
    }
};

int main()
{
    Box a(10,10,10);
    Box b(20,20,20);
    Box c;
    Box d(30,30,30);
    c = a + b;

    cout << c.getVolume() << endl;

    cout << (c == d) << endl;

    cout << (a<b) << endl;
}