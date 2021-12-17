#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
        cout << "=================" << endl;
        cout << "학번 : " << number << endl;
        cout << "이름 : " << name << endl;
        cout << "평점 : " << score << endl;
        cout << "=================" << endl;
        cout << endl;
    }
};

bool stringcomp(Student &s1, Student &s2)
{   
    // 오름차순으로 정렬 ex) 가나다~
    return s1.getName() < s2.getName();
}

bool compare(Student &s1, Student &s2)
{
    // 내림차순 
    return s1.getScore() > s2.getScore();
}

int main()
{   
    int size;
    cout << "몇명의 학생입니까? : ";
    cin >> size;

    vector<Student> std(size);

    for(int i = 0; i<size; i++)
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
        std[i] = s1;
    }

    //가나다순 정렬
    sort(std.begin(), std.end(), compare);

    for(Student &e : std)
    {
        e.print();
    }
    //성적순 정렬
    sort(std.begin(), std.end(), compare);

    for(Student &e : std)
    {
        e.print();
    }

    return 0;
}