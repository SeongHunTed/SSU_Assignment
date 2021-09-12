#include <iostream>
#include <string>

using namespace std;

class Employee
{
    string name;
    int age;
    int salary;
    int year;

public:
    void setEmployee(string n, int a, int s, int y);
    void getEmployee();
    int getEmployee_1();
    
};

void Employee::setEmployee(string n, int a, int s, int y){
    name = n;
    age = a;
    salary = s;
    year = y;
}

void Employee::getEmployee(){
     cout << "사원 : " << name << endl;
}

int Employee::getEmployee_1(){
    cout << "나이 : " << age << endl;
    cout << "급여 : " << salary << endl;
    cout << "연차 : " << year << endl;
}



int main(){
    Employee p1;
    p1.setEmployee("홍길동", 26, 1000000, 1);
    p1.getEmployee();
    cout << p1.getEmployee_1() << endl;

    return 0;
}