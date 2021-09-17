#include <iostream>
#include <string>
using namespace std;

class Cube
{
private:
    double side;
public:
    Cube(){ //매개변수가 없는 생성자
        side = 0;
    }
    Cube(double s){ //매개변수가 있는 생성자
        side = s;
    }
    double getSide(){
        return side;
    }
    double getVolume(){
        return side * side * side;
    }
};

int main(){
    Cube c1(5);
    cout << c1.getSide() << endl;
    cout << c1.getVolume() << endl;

    return 0;
}