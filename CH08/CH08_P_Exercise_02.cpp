#include <iostream>
#include <string>
using namespace std;

int main()
{
    int length = 0;
    cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
    cin >> length;

    string *names = new string[length];

    for (int i = 0; i<length; i++)
    {
        cout << "이름 입력 # " << i+1 << ": ";
        cin >> names[i];
    }
    cout << endl << endl;

    cout << "다음은 이름 목록입니다." << endl;
    for (int i = 0; i<length; i++)
    {
        cout << "이름 #" << i+1 << ": " << names[i] << endl;
    }

    delete [] names;
    return 0;
}