#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0;
    virtual ~Animal() { }
};

class Dog : public Animal
{
public:
    void speak() {cout << "멍멍!";}
};

class Cat : public Animal
{
public:
    void speak() {cout << "야옹!";}
};

int main()
{
    vector<Animal*> barn;

    barn.push_back(new Dog());
    barn.push_back(new Cat());

    for(auto e : barn)
    {
        e->speak();
    }

    barn.clear();

    return 0;
}