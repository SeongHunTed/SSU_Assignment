#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x,y;
public:
    Point(int px = 0 , int py = 0){
        x = px;
        y = py;
    }
    void print();
};

void Point::print(){
    cout << "(" << x << ", " << y << ")" << endl;
}

int main(){
    Point p1(100,200);
    p1.print();
}