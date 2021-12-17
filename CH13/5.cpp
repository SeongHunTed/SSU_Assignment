#include <iostream>
using namespace std;

template<typename T>
T getAverage(T list[], int n)
{   
    T sum;
    for(int i = 0; i<n; i++)
    {
        sum += list[i];
    }

    return sum/n;
}

int main()
{
    double list[] = {1.2, 3.3, 9.0, 1.5, 8.7};
    cout << getAverage(list, 5);
}