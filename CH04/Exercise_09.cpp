#include <iostream>
#include <string>

using namespace std;

class Triangle 
{
    int b, h;

    public:
        void setTriangle(int o, int e);
        double area(int b, int h);
        void print();
};

void Triangle::setTriangle(int o, int e){
    b = o;
    h = e;
}

double Triangle::area(int b, int h){
    return b*h*(0.5);
}

void Triangle::print(){
    cout << "밑변이 " << b << "이고 높이가 " << h << "인 삼각형의 면적 : " << area(b, h) << endl;
}

int main(){
    Triangle T1;
    T1.setTriangle(3,4);
    T1.print();
    
}