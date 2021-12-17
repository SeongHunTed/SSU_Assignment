#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    string number;
    double score;
public:
    Student(string na = "", string num = "", double s = 0)
    {
        name = na;
        number = num;
        score = s;
    }
    void setName(string n) { name = n;}
    void setNumber(string n) { number = n;}
    void setScore(double s)
    {
        if(s>4.5 || s < 0)
        {
            cout << "잘 못된 평점입니다. 프로그램을 재실행 하세요" << endl;
        } else {score = s;}
    }
    string getName() {return name;}
    string getNumber() {return name;}
    double getScore() {return score;}
    void print()
    {
        cout << "학번 : " << number << endl;
        cout << "이름 : " << name << endl;
        cout << "평점 : " << score << endl;
    }
};

int main()
{
    Student sArr[3];

    for(int i = 0; i<3; i++)
    {      
        string n;
        string num;
        double s;
        cout << "정보를 입력합니다!" << endl;
        cout << "학번 : ";
        cin >> num;
        cout << "이름 : ";
        cin >> n;
        cout << "평점 : "; 
        cin >> s;
        if(s>4.5 || s<0)
        {
            cout << "잘 못된 평점입니다. 프로그램을 재실행 해주세요." << endl;
            return 0;
        }
        Student s1(n, num, s);
        sArr[i] = s1;
    }

    for(int i = 0; i<3; i++)
    {   
        cout << endl;
        cout << "=================" << endl;
        sArr[i].print();
        cout << "=================" << endl;
    }

    return 0;
}