#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string job;
    int age;
    Person() : job("nothing"), age(19) {}
    void print()
    {
        cout << "job : " << job << endl;
        cout << "age : " << age << endl;
        walk();
        talk();
        run();
    }
    void walk() {cout << "can walk" << endl;}
    void talk() {cout << "can talk" << endl;}
    void run() {cout << "can run" << endl;}
};

class Professor : public Person
{
public:
    void teach() { cout << "can teach" << endl;}
};

class TennisPlayer : public Person
{
public:
    void playTennis() { cout << "can playtennis" << endl;}
};

class Businessman : public Person
{
public:
    void runBusiness() {cout << "can run Business" << endl;}
};

int main()
{
    Professor p;
    p.job = "교수";
    p.age = 25;
    p.print();
    p.teach();
}