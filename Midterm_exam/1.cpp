#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string number;
    double score;
    Student(string na = "", string num = "", double s = 0)
    {
        name = na;
        number = num;
        score = s;
    }

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

        Student s1(n, num, s);
        sArr[i] = s1;
    }

    for(int i = 0; i<3; i++)
    {
        sArr[i].print();
    }

    return 0;
}