#include <iostream>
#include <string>
using namespace std;

class Date
{
    int year, month, date;
public:
    Date(int y, int m, int d) : year(y), month(m), date(d) {}
    void print() {
        cout << year << "." << month << "." << date << endl;
    }

};

class Person
{
    string name;
    Date birth;

public:
    Person(string n, Date d) : name(n), birth(d) {}
    void print()
    {
        cout << name << "의 생일은";
        birth.print();
        cout << endl;
    }
};

int main()
{
    Date d(1997, 01, 22);
    Person p1("김성훈", d);
    p1.print();

    return 0;
   
}