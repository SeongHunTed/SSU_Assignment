#include <iostream>
#include <string>
using namespace std;

class Complex
{
    double r;
    double i;

public:
    Complex(){
        r = 0;
        i = 0;
    }

    Complex(double _r, double _i){
        r = _r;
        i = _i;
    }
    double getR(){ return r; }
    double getI(){ return i; }
    void setR(double _r){ r = _r; }
    void setI(double _i){ i = _i; }

    void print(){
        if(i>=0){
            cout << r << " + " << i << "i"; // << endl;
        } else {
            cout << r << " - " << -i << "i";
        }
    }

};

Complex add(Complex a, Complex b){
    Complex c;
    c.setR(a.getR()+b.getR());
    c.setI(a.getI()+b.getI());
    return c;
}


int main(){
    Complex a(5,3);
    Complex b(3,-4);

    cout << "복소수 1 : " ;
    a.print();
    cout << endl;
    cout << "복소수 2 : " ;
    b.print();
    cout << endl;
    cout << "(";
    a.print();
    cout << ")";
    cout << " + " << "(";
    b.print();
    cout << ")" << " = " << " (";
    add(a,b).print(); 
    cout << ")" << endl;
}