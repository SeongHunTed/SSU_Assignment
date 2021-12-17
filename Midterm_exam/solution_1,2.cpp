#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Student {

private:
    // 학생들의 정보 (1번은 public으로 선언, 2번은 private으로 선언)
	string	_name;
	int		_stuNumber;
	double	_marks;

public:
    // 디폴트 생성자
	Student() : _name(""), _stuNumber(0), _marks(0.0) {
	}
    // 생성자
	Student(string name, int number, double marks)
		: _name(name), _stuNumber(number), _marks(marks) {
	}
    // _name 설정자
	void setName(string name) {
		_name = name;
	}
    // _stuNumber 설정자
	void setStuNumber(int stuNumber) {
		_stuNumber = stuNumber;
	}
    // _marks 설정자
	void setMarks(double marks) {
        //잘못된 입력을 방지하기 위해 조건문 작성
		if (marks < 0) _marks = 0.0;
		else if (marks > 4.5) _marks = 4.5;
		else _marks = marks;
	}
    //한번에 값을 설정하는 함수
	void setStuInfo(string name, int number, double marks) {
		_name = name;
		_stuNumber = number;
		_marks = marks;
	}

    // _name, _stuNumber, _marks를 반환해주는 함수
	string getName() { return _name; }
	int getStuNumber() { return _stuNumber; }
	double getMarks() { return _marks; }

    // 학생정보를 출력해주는 print 함수
	void print() {
		cout << "학번: " << _stuNumber << endl;
		cout << "이름: " << _name << endl;
		cout << "평점: " << _marks << endl;
	}
};


int main()
{   
    //3명의 학생 정보를 저장할 수 있는 배열 3개 선언
	Student students[3];

    //반복문을 통하여 사용자로부터 3명의 학생에 대한 정보를 입력받음
	for (int i = 0; i < 3; i++) {
		string str = "";
		cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
		cin >> str;
		students[i].setName(str);

		int num;
		cout << i + 1 << "번째 학생의 학번을 입력하세요 : ";
		cin >> num;
		students[i].setStuNumber(num);

		double score;
		cout << i + 1 << "번째 학생의 학점을 입력하세요 : ";
		cin >> score;
		students[i].setMarks(score);
	}
    // 배열에있는 모든 학생들의 정보를 범위기반 반복문을 통해 print함수로 출력
	for (Student& s : students)
	{
		s.print();
		cout << endl;
	}

	return 0;
}