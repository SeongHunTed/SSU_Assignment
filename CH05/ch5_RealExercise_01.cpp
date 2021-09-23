#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x,y;
public:
    Point(void);
    ~Point(void);
};

Point::Point(void){
    x = 0;
    y = 0;
}

Point::~Point(void){}


int main(){
    Point p1;
}