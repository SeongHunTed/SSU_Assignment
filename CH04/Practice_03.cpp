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
    string getName();
    int getAge();
    int getSalary();
    int getYear();
};

void Employee::setEmployee(string n, int a, int s, int y){
    name = n;
    age = a;
    salary = s;
    year = y;
}

string Employee::getName(){
    return name;
}

int Employee::getAge(){
    return age;
}

int Employee::getSalary(){
    return salary;
}

int Employee::getYear(){
    return year;
}

int main(){
    Employee p1;
    p1.setEmployee("홍길동", 26, 100000, 1);
    cout << "이름 : " << p1.getName() << endl;
    cout << "나이 : " << p1.getAge() << endl;
    cout << "급여 : " << p1.getSalary() << endl;
    cout << "연차 : " << p1.getYear() << endl;
}