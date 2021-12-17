#include <iostream>
using namespace std;

template<typename T>
T getSmalles(T arr[], int n)
{
    int i;
    T min;
    min = arr[0];
    for(i = 0; i<n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    double list[] = {1.2, 3.3, 9.0, 1.1, 8.7};
    cout << getSmalles(list, 5) << endl;

}