#include <iostream>
#include <string>

class Person
{
    std::string name;
    int age;

public:
    void setPerson(std::string name, int age);
    void print();
};

void Person::setPerson(std::string n, int a) //this->name = name;
{
    name = n;
    age = a;
}

void Person::print()
{
    std::cout<< "이름 : " << name << std::endl;
    std::cout<< "나이 : " << age << std::endl;
}

int main()
{
    Person p1;
    p1.setPerson("김철수", 21);
    p1.print();

    return 0;
}