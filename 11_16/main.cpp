#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
    DynamicArray arr(10);

    for(int i = 0; i<10; i++)
    {
        arr.SetAt(i,(i+1)*10);
    }

    cout << "Size of arr = " << arr.GetSize() << endl;

    for(int i = 0; i>=0; --i)
    {
        cout << "arr[" << i << "] = " << arr.GetAt(i) << endl; 
    }
    return 0;
}