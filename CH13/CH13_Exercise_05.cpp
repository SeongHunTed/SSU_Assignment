#include <iostream>
using namespace std;

template<typename T>

T getSum(T list[], int n)
{
    T sum = 0;
    for(int i = 0; i<n; i++)
        sum += list[i];
    return sum;
}

int main()
{   
    int list1[5] = {1,2,3,4,5};
    double list2 [10] = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9};
    cout << getSum(list1, 5) << endl;
    cout << getSum(list2, 10) << endl;

    return 0;
}