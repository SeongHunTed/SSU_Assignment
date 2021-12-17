#include <iostream>
using namespace std;

template<typename T>
bool equal(T x, T y)
{
    if(x == y) return true;
    else return false;
}

int main()
{
    cout << equal('c', 'c') << endl;
    cout << equal(1,1) << endl;
    cout << equal(3.14, 3.14) << endl;

    return 0;

}