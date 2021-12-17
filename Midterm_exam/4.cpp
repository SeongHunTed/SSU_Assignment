#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 4,5번은 컴파일이 안되었습니다.

class Student
{
    string name; //이름
    double score; // 성적
public:
    Student(string name ="", double score = 0) : name(name), score(score) {} //생성자
    string getName() { return name;} // 
    void setName(string n) { this->name = n;}
    double getScore() {return score;}
    void setScore(double s) { score = s;}
    void print()
    {
        cout << "이름 : " << name << endl;
        cout << "학점 : " <<  score << endl;
    }
};

class MyClass
{
    string className;
    Student *p;
    int number;
public:
    MyClass(string c = "", int n = 0)
    {
        className = c;
        number = n;
    }
    ~MyClass() {delete[] p;}
    void setStudent() { p = new Student[number];}
    Student *getStudent() {return p;}
    void setClassName(string c) { className = c;}
    string getClassName() {return className;}
    int getNum() {return number;}
    void setNum(int s) { number = s;}
    void print()
    {   
        cout << "==============================" << endl;
        cout << "classname : " << className << endl;
        cout << "Student Name : " << p->getName() << endl;
        cout << "Student Score : " << p->getScore() << endl;
        cout << "==============================" << endl;
    }

    string beststudent() // 가장 높은 학점
    {
        for(int i = 0; i < number; i++)
        {
            if(p[i].getScore() > p[i+1].getScore()) {p[i+1] = p[i];}
            
            return p[number-1].getName(); // 가장 학점이 높은 학생을 반환
        }
    }

    double average()
    {   
        double sum = 0;
        double avg = 0;

        for(int i = 0; i<number; i++)
        {
            sum += p[i].getScore();
        }

        avg = sum/number;

        return avg;
    }

};

int main()
{   
    string n;
    int num;
    cout << "학급 이름과 학생수를 입력하세요" << endl;
    cout << "학급 이름 ";
    cin >> n;
    cout << "학생 수";
    cin >> num;

    MyClass *cls = new MyClass(n,num);

    for(int i = 0; i<cls->getNum(); i++)
    {   
        string n;
        double s;
        cout << "학생이름 : ";
        cin >> n;
        cout << "평점 : ";
        cin >> s;
        cls->getStudent()[i].setName(n);
        cls->getStudent()[i].setScore(s);
    }

    for(int i = 0; i<cls->getNum(); i++)
    {
        cout << "학생 #" << i + 1 << " : " << cls->getStudent()[i].getName() << endl;
    }

    cout << "평균은 : " << cls->average() << endl;
    cout << cls->beststudent() << endl;
    cls->print();

    delete cls->getStudent();
    delete cls;

    return 0;
}