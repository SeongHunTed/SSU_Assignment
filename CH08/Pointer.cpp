#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Student
{
private:
    string name, telephone;
public:
    Student(const string n = "", const string t = "") : name(n), telephone(t) {}
    string getTelephone() const{ return telephone;}
    void setTelephone(const string t) {telephone = t;}
    string getName() const {return name;}
    void setName(const string n) { name = n;}
};

class Lab
{
    string name;
    Student *chief;
public:
    Lab(string n = "") : name(n), chief(nullptr) {}
    void setChief(Student *p) {chief = p;}
    void print() const
    {
        cout << name << "연구실" << endl;
        if (chief != nullptr)
            cout << "실장은 " << chief->getName() << endl;
        else
            cout << "실장은 부재중 입니다." << endl;
    }
};

int main()
{
    Lab lab("영상 처리");
    Student *p = new Student("김철수", "010-2552-6374");
    lab.setChief(p);
    lab.print();

    delete p;
    return 0;
}