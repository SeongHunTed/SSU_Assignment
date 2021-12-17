#include <iostream>

using namespace std;

class Time
{
public:
    int hour, min, sec;
    Time() { hour = 0, min = 0, sec = 0;}
    ~Time() { }
    Time(int h, int m, int s) { hour = h, min = m, sec = s;}
    void setTime(int h, int m, int s) { hour = h, min = m, sec = s;}
    int getHour() { return hour;}
    int getMin() { return min;}
    int getSec() { return sec;}
    void print()
    {
        cout << "Time 객체: " << hour << ":" << min << ":" << sec << endl;
    }
};

bool isEqual(Time &t1, Time& t2)
{
    if(t1.getHour() == t2.getHour() && t1.getMin() == t2.getMin() && t1.getSec() == t2.getSec())
    {
        return true;
    }
    else return false;
}

bool isEqual(Time *pt1, Time *pt2)
{
    if(pt1->getHour() == pt2->getHour() && pt1->getMin() == pt2->getMin() && pt1->getSec() == pt2->getSec())
    {
        return true;
    }
    else return false;
}

int main()
{
    Time t1, t2;

    t1.setTime(12,11,33);
    t2.setTime(12,11,33);

    t1.print();
    t2.print();

    if(isEqual(t1, t2) == 1)
    {
        cout << "시간이 일치합니다! " << endl;
    } else {cout << "시간이 일치하지 않습니다!" << endl;}
    if(isEqual(&t1, &t2) == 1)
    {
        cout << "시간이 일치합니다! " << endl;
    } else {cout << "시간이 일치하지 않습니다!" << endl;}
    
    return 0;
}
