#include <iostream>
#include <memory>
#include <time.h>
using namespace std;

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
    
    for (int i = 0; i<100; i++){
        p[i].setX // 질문사항
    }
    

    delete[] p;
    return 0;
}