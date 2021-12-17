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

// 이름을 가나다 순으로 정렬해주는 함수
bool compareName(Student& s1, Student& s2)
{
	return s1.getName() < s2.getName();
}
//성적을 내림차순으로 정렬해주는 함수
bool compareMarks(Student& s1, Student& s2)
{
	return s1.getMarks() > s2.getMarks();
}

int main()
{   
    //벡터를 이용하여 학생정보를 저장하는 동적 객체 배열
	vector<Student> class1;
	int size = 0;
	// 사용자로 부터 학생수를 입력 받아 size에 대입
	cout << "학생수를 입력하세요:";
	cin >> size;

    // 반복문과 push_back을 이용하여 학생정보를 사용자로부터 입력
	for (int i = 0; i < size; i++)
	{
		string name;
		int stuNumber;
		double marks;

		cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
		cin >> name;

		cout << i + 1 << "번째 학생의 학번을 입력하세요 : ";
		cin >> stuNumber;

		cout << i + 1 << "번째 학생의 학점을 입력하세요 : ";
		cin >> marks;

		Student s(name, stuNumber, marks);
		class1.push_back(s);
	}
    //이름을 가나다 순으로 정렬, 배열 첫번째 요소부터 마지막 요소까지
	sort(class1.begin(), class1.end(), compareName);

    // 이름에 따른 정렬 상태 출력
	for (Student& s : class1) {
		s.print();
		cout << endl;
	}

    //성적을 내림차순에 따라 정렬 ,배열 첫번째 요소부터 마지막 요소까지
	sort(class1.begin(), class1.end(), compareMarks);

    // 성적에 따른 정렬 상태 출력
	for (Student& s : class1) {
		s.print();
		cout << endl;
	}

	return 0;
}