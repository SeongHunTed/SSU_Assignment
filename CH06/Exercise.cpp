#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Color{
    int r,g,b;
public:
    Color() : r(0), g(0), b(0) {}
    Color(int r, int g, int b) : r(r), g(g), b(b) {}
    void set_color(int red, int green, int blue){
        r = red;
        g = green;
        b = blue;
    }
    int get_r(){
        return r;
    }
    int get_g(){
        return g;
    }
    int get_b(){
        return b;
    }
};

int main(){
    Color list[3];

    for(Color& e : list){
        e.set_color(rand()%256, rand()%256, rand()%256);
    }

    for(Color e : list){
        cout << e.get_r() << e.get_g() << e.get_b() << endl;
    }

}