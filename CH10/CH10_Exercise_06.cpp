#include <iostream>
#include <string>
using namespace std;

class Counter
{
    int count;
public:
    Counter() {count = 0;}
    Counter(int value) {count = value;}
    //int getCount() {return count;}
    void operator ++() { count++;}
    void operator --() { count--;}
};

int main()
{
    Counter c(10);
    //cout << c.getCount() << endl;
    ++c;
    //cout << c.getCount() << endl;
    --c;
    //cout << c.getCount() << endl;
    return 0;
}