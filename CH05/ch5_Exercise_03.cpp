/*
#include <iostream>
#include <string>
using namespace std;

class Box
{
private:
    int boxnumber;
    bool inbox;
    int length;
    int width;
    int height;
    int volume;
public:
    Box(){
        boxnumber = 0;
        volume = length * width * height;
        length = 0;
        width = 0;
        height = 0;
    }
    Box(int b, int l, int w, int h) : boxnumber(b), length(l), width(w), height(h){}
    int getlength(){
        return length;
    }
    int getwidth(){
        return width;
    }
    int getheight(){
        return height;
    }
    int getVolume(){
        return volume;
    }
    int setlength(int l){
        length = l;
    }
    int setwidth(int w){
        width = w;
    }
    int setheight(int h){
        height = h;
    }
    void empty(){
        if (inbox == true) inbox = true;
        else inbox = false;
    }
    void print(){
        cout << "상자 #" << boxnumber << endl;
        cout << "상자의 길이" << getlength() << endl;
        cout << "상자의 너비" << getwidth() << endl;
        cout << "상자의 높이" << getheight() << endl;
        cout << "상자의 부피" << getVolume() << endl;
    }
};

int main(){
    Box box1 (1,0,0,0);
    Box box2 (2,3,2,4);

    box1.print();
    cout << endl;
    box2.print();
}*/