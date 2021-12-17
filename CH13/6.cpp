#include <iostream>
using namespace std;

template<typename T>
bool isEqual(T list1[], T list2[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(list1[i] != list2[i]){ return false;}
    }
    return true;
}

int main()
{
    double list1[] = {1.2, 3.3, 9.0, 1.5, 8.7};
    double list2[] = {1.2, 3.3, 9.0, 1.5, 8.7};

    cout << isEqual(list1, list2, 5);
}