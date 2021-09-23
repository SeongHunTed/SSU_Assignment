#include <iostream>
#include <string>

using namespace std;

class Complex
{
    public:
        double r;
        double i;
        
        void print();
};

void Complex::print(){
    if (i>=0){
        cout << r << " + " << i << "i" << endl;
    } else {
        cout << r << " - " << -i << "i" << endl;
    }
}

int main(){
    Complex a,b;

    a.r = 5;
    a.i = 3;

    b.r = 3;
    b.i = -4;

    a.print();
    b.print();
    
}