#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
public:
    Time() : hours(0), minutes(0) {}
    Time(int h, int m) : hours(h), minutes(m) { }

    void displayTime()
    {
        cout << hours << ":" << minutes << endl;
    }

    Time operator++()
    {
        ++minutes;
        if(minutes >= 60)
        {
            ++hours;
            minutes -= 60;
        }
        return Time(hours, minutes);
    }
};

int main()
{
    Time t(10,59);
    t.displayTime();
    ++t;
    t.displayTime();
}
