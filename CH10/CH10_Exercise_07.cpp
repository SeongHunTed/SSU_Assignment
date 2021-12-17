#include <iostream>
#include <string>
using namespace std;

class Time
{
    int hours, minutes;
public:
    Time() {hours = 0, minutes = 0;}
    Time(int h, int m) {hours = h, minutes = m;}
    int getHour() {return hours;}
    int getMin() {return minutes;}

    Time operator+(const Time& t1)
    {
        Time t;
        t.hours = this->hours + t1.hours;
        t.minutes = this->minutes + t1.minutes;
        return t;
    }

};