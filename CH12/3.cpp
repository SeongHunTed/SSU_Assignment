#include <iostream>
using namespace std;

class HomeAppliance
{
public:
    int price;
    virtual double getPrice() = 0;
    HomeAppliance() {price = 0;}
    HomeAppliance(int p) : price(p) {}
};

class TV : public HomeAppliance
{
public:
    TV(int p) { price = p;}
    double getPrice() {return price*0.9;}
};

class RF : public HomeAppliance
{
public:
    RF(int p) {price = p;}
    double getPrice() {return price*0.95;}
};

int main()
{
    HomeAppliance *HA[2];
    HA[0] = new TV(1000);
    HA[1] = new RF(1000);

    cout << HA[0]->getPrice() << endl;
    cout << HA[1]->getPrice() << endl;
}