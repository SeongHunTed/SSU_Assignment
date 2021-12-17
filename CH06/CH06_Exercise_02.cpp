#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Rect
{
    int w,h;
public:
    Rect() : w(0), h(0) {}
    Rect(int w, int h) : w(w), h(h) {}
    int area() {return w*h;}
    void print(){
        cout << "(" << w << "," << h << ")" << endl;
    }
};

bool compare(Rect& p, Rect& q){
    return p.area() > q.area();
}

int main(){

    int w,h;

    vector<Rect> vec(3);

    for (auto& elem : vec){
        cout << "너비 : ";
        cin >> w;
        cout << "높이 : ";
        cin >> h;

        elem = Rect(w,h);
    }

    sort(vec.begin(), vec.end(), compare);

    for (auto& elem : vec){
        elem.print();
    }

    return 0;
}