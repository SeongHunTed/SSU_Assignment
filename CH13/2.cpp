#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "가위, 바위, 보 게임입니다" << endl;

    try
    {
        cout << "무엇을 내시겠습니까 : ";
        cin >> s;
        if(s != "가위" && s != "보" && s != "바위")
            throw "\"가위\", \"바위\", \"보\" 중에서만 선택하세요.";
    }
    catch(const char* Message)
    {
        cout << "오류 : " << Message;
    }

    cout << endl;
    return 0;
}