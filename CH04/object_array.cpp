#include <iostream>
using namespace std;

// 참조자
/*
class Pizza
{
public:
    Pizza(int s) : size(s) {}
    int size;
};

void makeDouble (Pizza& p){
    p.size *= 2;
}

int main(){
    Pizza pizza(10);
    makeDouble(pizza);
    cout << pizza.size << "인치 피자" << endl;
    return 0;
} 

// 객체를 반환하는 함수

Pizza createPizza(){
    Pizza p(10);
    return p;
}

int main(){
    Pizza pizza = createPizza();
    cout << pizza.size << "인치 피자" << endl;

    return 0;
}

class Circle
{
public:
    int x,y;
    int radius;
    Circle() : x(0), y(0), radius(0) {}
    Circle(int x, int y, int r) : x(x), y(y), radius(r) {}
    void print(){
        cout << "반지름 : " << radius << " @(" << x << ", " << y << ")" << endl; 
    }
};

int main(void)
{
    Circle objArray[10];

    for (Circle& c : objArray){
        c.x = rand() % 500;
        c.y = rand() % 300;
        c.radius = rand() % 100;
    }

    for (Circle& c : objArray)
        c.print();
    return 0;
} */