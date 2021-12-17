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

// 학급정보를 저장하는 클래스
class MyClass {
    //멤버변수
	string _className; //학급이름
	Student* p; // Student 클래스의 자료형의 주소를 받는 포인터
	int _size; // 학생 수

public:
    // 생성자
	MyClass(string name, int size) : _className(name), _size(size) {
        // 동적 배열도 학생수를 설정
		p = new Student[size];
	}
    // 복사 생성자, 새로운 학급을 만들기 위해
	MyClass(const MyClass& other) {
		_className = other._className; 
		_size = other._size;
		p = new Student[_size];
        // 요소 하나,하나 깊은 복사
		for (int i = 0; i < _size; ++i) {
			p[i] = other.p[i];
		}
	}
    // 소멸자, 동적으로 만든 학생 배열 삭제
	~MyClass() {
		delete[] p;
	}
    // 학급이름 설정자
	void setClassName(string name) {
		_className = name;
	}
    // 학급이름 반환하는 함수
	string getClassName() {
		return _className;
	}
    // 학생수를 반환하는 함수
	int getSize() {
		return _size;
	}
    // 학생 정보를 반환하는 포인터 함수
	Student* getStudents() {
		return p;
	}
    // 학급이름, 학생수, 학생 정보를 출력하는 함수, 학생정보는 반복문을 통해 동적생성된 배열의 요소를 출력
	void print() {
		cout << "학급이름 :" << _className << endl;
		cout << "학생 수 :" << _size << endl;
		cout << "학생 정보" << endl;
		for (int i = 0; i < _size; i++) {
			cout << i + 1 << "번째 학생" << endl;
			p[i].print();
		}
	}

    // 학급에서 가장 높은 학점의 학생의 이름을 출력
	string getTopName() {
		if (_size <= 0) return "학생이 없습니다."; // 배열이 없을경우
		else if (_size == 1) return p[0].getName(); // 학생이 1명일 경우

		string name = p[0].getName();
		double topMarks = p[0].getMarks(); //최고학점을 첫번째 배열 요소로 설정
		
        // 첫번째 요소와 계속 비교해 나아가며 최고 성적인 학생을 갱신
		for (int i = 1; i < _size; i++) {
			if (topMarks < p[i].getMarks()) {
				name = p[i].getName();
				topMarks = p[i].getMarks();
			}
		}

		return name;
	}

    // 평균학점을 출력해주는 함수
	double getMarksAver() {
		if (_size <= 0) return 0.0; // 배열이 없을경우
		else if (_size == 1) return p[0].getMarks(); // 학생이 1명일 경우

		double sum = 0.0;
        // 반복문을 돌며 sum에 모든 학점을 더함
		for (int i = 0; i < _size; i++) {
			sum += p[i].getMarks();
		}
        // sum 을 학생수로 나눔
		return sum / _size;
	}
};

int main()
{   
    // size, className을 사용자로부터 입력받는다.
	int size = 0;
	string className = "";

	cout << "학급 이름을 입력하세요:";
	cin >> className;
	cout << "학생수를 입력하세요:";
	cin >> size;
    // 입력받은 값으로 객체를 생성한다.
	MyClass myClass(className, size);

    // 반복문을 돌며 학생들의 정보를 입력한다.
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

    // 학급정보에 대한 모든 정보를 출력
	myClass.print();

    // 함수에서 선언한, 함수를 통해 최고 성적의학생, 평균을 출력한다.
	cout << myClass.getTopName() << endl;
	cout << myClass.getMarksAver() << endl;

	//5번
    // 복사생성자를 통해 객체를 복사한다.
	MyClass clone(myClass);

    // 학생수가 0명 이상일 경우 첫 번째 학생의 이름과 학번, 학점을 사용자에게 입력받아 수정한다.
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
        // 복사된 객체의 정보를 출력
		clone.print();
        // 복사된 객체의 최고 성적의 학생, 평균을 출력한다.
		cout << clone.getTopName() << endl;
		cout << clone.getMarksAver() << endl;
	}

	return 0;
}