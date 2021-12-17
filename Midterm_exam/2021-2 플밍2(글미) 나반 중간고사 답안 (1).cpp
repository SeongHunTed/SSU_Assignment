// midterm_na.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Student {
	string	_name;
	int		_stuNumber;
	double	_marks;

public:
	Student() : _name(""), _stuNumber(0), _marks(0.0) {
	}
	Student(string name, int number, double marks)
		: _name(name), _stuNumber(number), _marks(marks) {
	}

	void setName(string name) {
		_name = name;
	}
	void setStuNumber(int stuNumber) {
		_stuNumber = stuNumber;
	}
	void setMarks(double marks) {
		if (marks < 0) _marks = 0.0;
		else if (marks > 4.5) _marks = 4.5;
		else _marks = marks;
	}
	void setStuInfo(string name, int number, double marks) {
		_name = name;
		_stuNumber = number;
		_marks = marks;
	}

	string getName() { return _name; }
	int getStuNumber() { return _stuNumber; }
	double getMarks() { return _marks; }

	void print() {
		cout << "학번: " << _stuNumber << endl;
		cout << "이름: " << _name << endl;
		cout << "평점: " << _marks << endl;
	}
};

bool compareName(Student& s1, Student& s2)
{
	return s1.getName() < s2.getName();
}
bool compareMarks(Student& s1, Student& s2)
{
	return s1.getMarks() > s2.getMarks();
}

class MyClass {
	string _className;
	Student* p;
	int _size;

public:
	MyClass(string name, int size) : _className(name), _size(size) {
		p = new Student[size];
	}
	MyClass(const MyClass& other) {
		_className = other._className;
		_size = other._size;
		p = new Student[_size];

		for (int i = 0; i < _size; ++i) {
			p[i] = other.p[i];
		}
	}

	~MyClass() {
		delete[] p;
	}

	void setClassName(string name) {
		_className = name;
	}

	string getClassName() {
		return _className;
	}

	int getSize() {
		return _size;
	}

	Student* getStudents() {
		return p;
	}

	void print() {
		cout << "학급이름 :" << _className << endl;
		cout << "학생 수 :" << _size << endl;
		cout << "학생 정보" << endl;
		for (int i = 0; i < _size; i++) {
			cout << i + 1 << "번째 학생" << endl;
			p[i].print();
		}
	}

	string getTopName() {
		if (_size <= 0) return "학생이 없습니다.";
		else if (_size == 1) return p[0].getName();

		string name = p[0].getName();
		double topMarks = p[0].getMarks();
		
		for (int i = 1; i < _size; i++) {
			if (topMarks < p[i].getMarks()) {
				name = p[i].getName();
				topMarks = p[i].getMarks();
			}
		}

		return name;
	}

	double getMarksAver() {
		if (_size <= 0) return 0.0;
		else if (_size == 1) return p[0].getMarks();

		double sum = 0.0;
		for (int i = 0; i < _size; i++) {
			sum += p[i].getMarks();
		}

		return sum / _size;
	}
};

// 1번, 2번
/*
int main()
{
	Student students[3];

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

	for (Student& s : students)
	{
		s.print();
		cout << endl;
	}

	return 0;
}
*/

// 3번 
/*
int main()
{
	vector<Student> class1;
	int size = 0;
	
	cout << "학생수를 입력하세요:";
	cin >> size;

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

	sort(class1.begin(), class1.end(), compareName);

	for (Student& s : class1) {
		s.print();
		cout << endl;
	}

	sort(class1.begin(), class1.end(), compareMarks);

	for (Student& s : class1) {
		s.print();
		cout << endl;
	}

	return 0;
}
*/

// 4번, 5번
int main()
{
	int size = 0;
	string className = "";

	cout << "학급 이름을 입력하세요:";
	cin >> className;
	cout << "학생수를 입력하세요:";
	cin >> size;

	MyClass myClass(className, size);

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

		myClass.getStudents()[i].setStuInfo(name, stuNumber, marks);
	}

	myClass.print();

	cout << myClass.getTopName() << endl;
	cout << myClass.getMarksAver() << endl;

	//5번
	MyClass clone(myClass);

	if (clone.getSize() > 0) {
		string name;
		int stuNumber;
		double marks;

		cout << "1번째 학생의 이름을 입력하세요 : ";
		cin >> name;

		cout << "1번째 학생의 학번을 입력하세요 : ";
		cin >> stuNumber;

		cout << "1번째 학생의 학점을 입력하세요 : ";
		cin >> marks;

		clone.getStudents()[0].setStuInfo(name, stuNumber, marks);

		clone.print();

		cout << clone.getTopName() << endl;
		cout << clone.getMarksAver() << endl;
	}

	return 0;
}