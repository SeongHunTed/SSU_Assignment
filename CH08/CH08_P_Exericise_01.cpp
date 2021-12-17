#include <iostream>
using namespace std;

int main()
{   
    int i = 0;
    cout << "몇 개의 정수를 입력합니까? : ";
    cin >> i;
    int *p = new int[i];

    for (int j = 0; j<i; j++)
    {
        cout << "정수를 입력하시오 : ";
        cin >> p[j];
    }

    cout << "입력된 정수는 : ";
    for (int j = 0; j<i; j++)
    {
        cout << p[j] << ", ";
    }

    cout << endl;

    return 0;
    

}