#include <iostream>
#include <string>
using namespace std;

//얕은 복사와 깊은 복사
// 자동으로 생성되는 복사 생성자는 얕은 복사만 수행
// 따라서 직접 복사 생성자를 만들어야함


class MyArray
{
public:
    int size;
    int *data;

    MyArray(int size)
    {
        this->size = size;
        data = new int[size];
    }

    //깊은 복사
    MyArray(const MyArray& other) 
    {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; i++){
            data[i] = other.data[i];
        }
    }

    ~MyArray()
    {
        if(data != nullptr)
            delete[] this->data;
    }
};

int main()
{
    MyArray buffer(10);
    buffer.data[0] = 1;

    {
        MyArray clone = buffer;
    }

    buffer.data[0] = 2;

    return 0;
}