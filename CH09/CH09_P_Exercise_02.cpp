#include <iostream>
using namespace std;

class Line
{
public:
    int getLength(void);
    Line (int len);
    Line(const Line& other);
    ~Line();

private:
    int *ptr;
};

Line::Line(int len){
    cout << "일반 생성자" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line& other)
{
    ptr = new int;
    *ptr = *other.ptr;
    cout << "복사 생성자" << endl;
}

Line::~Line(void)
{
    delete ptr;
}

int Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "선의 길이 : " << obj.getLength() << endl;
}

int main()
{
    Line l1(10);
    Line l2 = l1;

    display(l1);
    display(l2);

    return 0;
}

