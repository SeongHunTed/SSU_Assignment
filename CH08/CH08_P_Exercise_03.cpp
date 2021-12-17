#include <iostream>
#include <time.h>
using namespace std;

class Circle
{
    int radius;
public:
    Circle(){radius = 0;}
    ~Circle() {}
    void setRadius(int radius) {this->radius = radius;}
    int getRadius() { return radius;}
    double getArea() {return (radius*radius*3.14f);}

};


int main()
{   
    int count = 0;
    int i = 0;
    srand((unsigned int)time(NULL));
    cout << "생성할 원의 개수 : ";
    cin >> i;

    Circle *p = new Circle[i];

    for (int j = 0; j<i; j++)
    {
        
        cout << "원 " << j+1 << "의 반지름 >>";
        p[j].setRadius(rand()%100+1);
        cout << p[j].getRadius() << endl;
    }

    for (int j = 0; j<i; j++)
    {
        
        if( p[j].getArea() > 100)
            count++;
    }

    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    delete [] p;
    return 0;
}