#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int snumber; // 주민번호
    int age;
public:
    Person(string _name, int _snum, int _age) : name(_name), snumber(_snum), age(_age){}
    ~Person(){}
};

int main(){
    Person hoon("김성훈", 970122, 25);
}