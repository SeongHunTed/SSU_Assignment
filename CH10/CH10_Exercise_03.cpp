#include <iostream>
#include <string>
using namespace std;

class Test
{
    int hour, min, sec;
public:
    Test(int h =0, int m = 0, int s = 0) : hour(h), min(m), sec(s) {}

    int setHour(int h) {hour = h;}
    int setMin(int m) {min = m;}
    int setSec(int s) {sec = s;}
    
    int getHour() {return hour;}
    int getMin() {return min;}
    int getSec() {return sec;}

    Test operator+(const Test& t1) {}
};

Test Test::operator+(const Test& t1)
{
    Test t;
    t.hour = this->hour + t1.hour;
    t.min = this->min + t1.min;
    t.sec = this->sec + t1.sec;
    return t;
}