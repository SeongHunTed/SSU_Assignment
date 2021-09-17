#include <iostream>
#include <string>
using namespace std;

// 이 문제 자체가 무엇을 요구하는지 잘 알 수가 없었습니다.

class Dog
{
private:
    string name;
    int age;
public:
    string breed;

    Dog(string n, int a){
        name = n;
        age = a;
    }
    Dog(string n, string b, int a){ // ?의문점 : 어째서 매개변수를 다르게 하여 두번 중복 생성자를 만드는 것일까?
        name = n;
        breed = b;
        age = a;
    }
    void print();
};

void Dog::print(){
    cout << "댕댕이 이름 : " << name << "// 종 : " << breed << "// 나이 : " << age << endl;
}

int main(){
    Dog myDog("몽이", "잡종", 3);
    myDog.print();
}