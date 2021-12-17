#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Rect
{
    int w, h;
public:
    Rect() : w(0), h(0) {}
    Rect(int w, int h) : w(w), h(h) {}
    int area() {return w*h;}
    void print(){
        cout << "(" << w << "," << h << ")" << endl; 
    }
};

int main(){
    int x;
    int w,h;

    cout << "사각형의 개수 : ";
    cin >> x;

    vector<Rect> box(x);

    for (auto& elem : box){
        cout << "사각형의 폭 : ";
        cin >>  w;
        cout << "사각형의 높이 :";
        cin >> h;

        elem = Rect(w,h);
    }

    for(auto& elem : box){
        if(elem.area() > 100){
            elem.print();
        }
    }
    return 0;
}