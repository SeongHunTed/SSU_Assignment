#include <iostream>
#include <string>

using namespace std;

class Sum{
    int n1,n2;

public:
    void init();
    int add();
};

void Sum::init(){
    int x,y;
    cout << "첫 번째 정수 : ";
    cin >> x;
    cout << "두 번째 정수 : ";
    cin >> y;
    n1 = x;
    n2 = y;
}

int Sum::add(){
    return n1+n2;
}

int main(){
    Sum obj;
    obj.init();
    cout << obj.add() << endl;

}

