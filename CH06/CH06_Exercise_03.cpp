#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Color
{
    int r,g,b;
public:
    Color() : r(0) , g(0) ,b(0) {}
    Color(int r, int g, int b) : r(r), g(g), b(b) {}
    void setColor(int red, int green, int blue){
        r = red;
        g = green;
        b = blue;
    }
    void print(){
        cout << "(" << r << "," << g << "," << b << ")" << endl;
    }

};

int main(){

    int r,g,b;

    vector<Color> c[3];

    for(auto& elem : c){
        Color c { rand()%256, rand()%256, rand()%256};
    }

    return 0;
}