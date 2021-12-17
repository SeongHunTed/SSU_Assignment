#include <iostream>
#include <memory>
#include <time.h>
using namespace std;

// 8,9번에 해당하는 동시 답안 입니다

class Point
{
    int x, y;
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    ~Point() { }
    void setX(int x) { this->x = x;}
    void setY(int y) { this->y = y;}
    int getX() {return x;}
    int getY() {return y;}
};

int main()
{   
    srand(time(NULL));
    Point *p = new Point[100];

    delete[] p;
    return 0;
}