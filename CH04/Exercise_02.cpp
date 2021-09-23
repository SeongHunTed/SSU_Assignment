#include <iostream>
#include <string>

using namespace std;

class Computer
{
    string name;
    int RAM;
    double cpu_speed;

public:
    void setComputer(string n, int R, double c);
    void print();
};

void Computer::setComputer(string n, int R, double c){
    name = n;
    RAM = R;
    cpu_speed = c;
}

void Computer::print(){
    cout << "이름 : " << name << endl;
    cout << "RAM : " << RAM << endl;
    cout << "CPU 속도 : " << cpu_speed << endl;
}

int main(){
    Computer obj;
    obj.setComputer("오피스컴퓨터",8,4.2f);  // 4.2와 4.2f의 차이
    obj.print();

    return 0;
}
