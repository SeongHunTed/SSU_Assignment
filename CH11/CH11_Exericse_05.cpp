#include <iostream>
using namespace std;

class Phone
{
    void call();
    void receive();
    void sendSMS();
};

class Computer
{
    void doInternet();
};

class SmartPhone : public Phone, public Computer
{

};

int main()
{
    SmartPhone iphone13;
    //iphone13.call();

    return 0;
}