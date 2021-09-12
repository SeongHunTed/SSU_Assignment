#include <iostream>
#include <string>

using namespace std;

class Point{
    int x;
    int y;
public:
    int getX();
    int getY();
    void setX(int a);
    void setY(int b);
};

int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
void Point::setX(int a){
    x = a;
}
void Point::setY(int b){
    y = b;
}

int main(){
    Point p1;
    p1.setX(100);
    p1.setY(200);
    cout << "x좌표 : " << p1.getX() << " y좌표 : " << p1.getY() << endl; 
}