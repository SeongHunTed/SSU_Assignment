#include <iostream>
#include <string>
using namespace std;

class Rect
{
    int width, height;

public:
    Rect()
    {
        width = 0;
        height = 0;
    }
    ~Rect() { }
    void setW(int w) { width = w;}
    void setH(int h) { height = h;}
    int getW() { return width;}
    int getH() { return height;}
    int getArea() { return (width*height);}
    int getPerimeter() { return (2*width + 2*height);}
    void print()
    {
        cout << "면적 : " << getArea() << endl;
        cout << "둘레 : " << getPerimeter() << endl;
    }
};

bool is_equal(Rect& r1, Rect& r2)
{
    if(r1.getH() == r2.getH() && r1.getW() == r2.getW()){
        return true;
    } else {return false;}
}

int main()
{
    Rect r1,r2;
    r1.setH(10);
    r1.setW(20);

    r2.setH(10);
    r2.setW(20);

    cout << is_equal(r1, r2) << endl;
    
    return 0;

}