#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int salary;
public:
    Employee() { name = "", salary = 0; }
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }
    int computeSalary() const {return salary;}
};

class Manager : Employee
{
    int bonus;
public:
    Manager(){ name = "", salary = 0, bonus = 0;}
    Manager(string n, int s, int b)
    {
        name = n;
        salary = s;
        bonus = b;
    }
    int computeSalary() const {return salary + bonus;}
    void print()
    {
        cout << "이름: " << name << endl;
        cout << "salary: " << salary << endl;
        cout << "bonus: " << bonus << endl;
    }
};

int main()
{
    Manager m("Ted", 200, 100);
    m.print();
    cout << "total: " << m.computeSalary() << endl;

    return 0;
 }