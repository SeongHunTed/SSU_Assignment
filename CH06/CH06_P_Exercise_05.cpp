#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student
{
    string name;
    double marks;
public:

    Student() : name(""), marks(0.0) {}
    Student(string n, double m) : name(n), marks(m) {}
    string get_name() {return name;}
    double get_marks() {return marks;}
    void print(){
        cout << "이름 : " << name << endl;
        cout << "학점 : " << marks << endl;
    }
};

bool compare(Student& p, Student& q){
    return p.get_marks() > q.get_marks(); //이번엔 왜 이렇게 되었을까
}

int main(){
    int x;
    string name;
    double marks;

    cout << "학생 수 : ";
    cin >> x;

    vector<Student> stud(x);

    for (auto& elem : stud){
        cout << "이름 : ";
        cin >> name;
        cout << "학점 : ";
        cin >> marks;

        elem = Student(name, marks);
    }

    sort(stud.begin(), stud.end(), compare);


    cout << "================================" << endl;
    for(auto& elem : stud){
        elem.print();
    }
    cout << "================================" << endl;

    return 0;

}