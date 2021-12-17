#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Color{
    unsigned int r,g,b;
public:
    Color() : r(0), g(0), b(0) {}
    Color(unsigned int r,unsigned int g,unsigned int b) : r(r), g(g), b(b) {}
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
    void print(){
        cout << "(" << r << "," << g << "," << b << ")" << endl;
    }
};

int main(){
    
    vector<Color> C;

    C.push_back(Color(rand()%256,rand()%256,rand()%256));
    C.push_back(Color(rand()%256,rand()%256,rand()%256));
    C.push_back(Color(rand()%256,rand()%256,rand()%256));

    for(auto& e : C){
        e.print();
    }

    return 0;
}