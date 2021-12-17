#include <iostream>

using namespace std;

class Test
{
    int x;
public:
    Test(){ x=0; cout << x << " ";}
    Test(int x) : x(x) {}
    void print(){
        cout << "배열의 수 : " << x << endl;
    }
};

int main(){
    // Test a[2]; 출력 0 0
    Test b[2] = { Test(1), Test(2)}; // 아무것도 출력안됨
    for (auto& a : b){
        a.print();
    }
    
}