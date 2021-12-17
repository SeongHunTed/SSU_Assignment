#include <iostream>
using namespace std;

int main()
{   
    int value = -1;

    try
    {
        if(value < 0) throw value;
    }
    catch(int v)
    {
        cout << "negative" << endl;
    }
}