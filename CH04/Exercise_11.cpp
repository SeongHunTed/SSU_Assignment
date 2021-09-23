#include <iostream>
#include <string>

using namespace std;

// 각 멤버변수에 대해 접근자 설정자 개별적으로 작성

class Box
{
    double length;
    double width;
    double height;

public:
    double getVolume(){
        return length*width*height;
    }
    double getLength(){
        return length;
    }
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    void setLength(double l){
        length = l;
    }
    void setHeight(double h){
        height = h;
    }
    void setWidth(double w){
        width = w;
    }
};

int main(){
    Box myBox;
    myBox.setLength(6);
    myBox.setWidth(7);
    myBox.setHeight(5);
    cout << "[" << myBox.getLength() << "," << myBox.getWidth() << "," << myBox.getHeight() << "]" << endl;
    cout << "상자의 부피 : " << myBox.getVolume() << endl;
}