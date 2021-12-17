#include <iostream>
#include <string>
using namespace std;

class Car
{
protected:
    string model;
    string carnum;
    double ride;
public:
    
    Car(string m = "", string c = "", double r = 0.0)
    {
        model = m;
        carnum = c;
        ride = r;
    }
    void increase(double x)
    {
        ride = ride + x;
    }

    virtual void print()
    {
        cout << "[자동차] 모델명 : " << model << ", " << " 차량번호 : " << carnum << ", 주행거리 : " << ride << "km" << endl;
    }


};

class Bigcar : public Car //승합차
{
public:
    int maxman;
    int nowman;

    Bigcar(string m, string c, double r, int M, int n) : Car(m,c,r), maxman(M), nowman(n) { }

    void nowmanplus(int x)
    {
        nowman += x;
    }

    void nowmanminus(int x)
    {
        nowman -= x;
    }

    void print()
    {
        cout << "[승합차] 모델명 : " << model << ", " << " 차량번호 : " << carnum << ", 주행거리 : " << ride << "km" << ", 최대탑승안원 : " << maxman << ", 현재탑승인원 : " << nowman << endl;
    }
};

class Truck : public Car
{
private:
    double maxload;
    double nowload;

public:
    Truck(string m, string c, double r, double M, double n) : Car(m,c,r), maxload(M), nowload(n) {}

protected:
    void loadplus(double x)
    {
        nowload += x;
    }

    void loadminus(double x)
    {
        nowload -= x;
    }

    void print()
    {
        cout << "[화물차] 모델명 : " << model << ", " << " 차량번호 : " << carnum << ", 주행거리 : " << ride << "km" << ", 최대적재량 : " << maxload << ", 현재적재량 : " << nowload << endl;
    }
};

int main()
{
    Car *cars[5];
    cars[0] = new Bigcar("쏠라티", "00가 0000", 12345.6, 15, 5);
    cars[1] = new Truck("포터", "00가 0000", 12345.6, 1000.0, 508.6);
    cars[2] = new Car("SM5", "00가 0000", 12345.6);
    cars[3] = new Bigcar("쏠라티", "00가 0000", 12345.6, 15, 5);
    cars[4] = new Truck("포터", "00가 0000", 12345.6, 1000.0, 508.6);

    // 화물차 임의로 적재, 하차

    

    //cars[2]->Truck::loadplus(200);
    //cars[2]->Truck::loadminus(300);
    cars[4]->
    
    // 승합차 임의로 승차, 하차
    //cars[0]->Bigcar::nowmanplus(3);
    //cars[0]->Bigcar::noewmanminus(2);


    // 자동차 임의로 주행

    cars[2]->increase(25000.0);

    for(int i  = 0; i<5; i++)
    {
        cars[i]->print();
    }

    for(int i = 0; i<5; i++)
    {
        delete cars[i];
        cars[i] = NULL;
    }

    return 0;

}