#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    void setTime(const int h, const int m, const int s);
    void print() const;
};

void Time::setTime(const int h, const int m, const int s){
    hour = h;
    minute = m;
    second = s;
}

void Time::print() const{
    cout.width(2); // 2칸으로 설정
    cout.fill('0'); // 빈공간 0으로 채움
    cout << hour << ":" << minute << ":" << second << endl;
}

int main(){
    Time T1;
    T1.setTime(07,10,20);
    T1.print();
}