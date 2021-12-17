#include <iostream>
using namespace std;

int main()
{
    int age = 0;

    try
    {
        cout << "나이를 입력하시오 : ";
        cin >> age;

        if(age < 0)
            throw "양수를 입력하여야 함";
        cout << "나이 : " << age << endl;
    }
    catch(const char* Message)
    {
        cout << "오류 : " << Message;
    }
    cout << endl;

    return 0;
}