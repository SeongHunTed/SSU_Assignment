#include <iostream>
#include <string>

using namespace std;

class Employee
{
    string name;
    int age;
    int salary;

    public:
        void setEmployee(string n, int a, int s);
        void print();
};

void Employee::setEmployee(string n, int a, int s){
    name = n;
    age = a;
    salary = s;
}

void Employee::print(){
    cout << name << endl;
    cout << age << endl;
    cout << salary << endl;
}

int main(){
    Employee Employee1;
    Employee1.setEmployee("김철수", 38, 2000000);
    cout << "Employee1 : " << endl;
    Employee1.print();


}