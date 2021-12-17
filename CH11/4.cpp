#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string address;
    string tel;
public:
    Person() {name = address = tel = "";}
    Person(string n, string a, string t)
    {
        name = n;
        address = a;
        tel = t;
    }
};

class Customer : Person
{
private:
    string id;
    int mileage;
public:
    Customer() {name = address = tel = id = "", mileage = 0;}
    Customer(string n, string a, string t, string i, int m)
    {
        name = n;
        address = a;
        tel = t;
        id = i;
        mileage = m;
    }
    void setName(string n) { name = n;}
    void setAddress(string a) { a = address;}
    void setTel(string t) { tel = t;}
    void setId(string i) { id = i;}
    void setMileague(int m) { mileage = m;}
    string getName() {return name;}
    string getAddress() {return address;}
    string getTel() {return tel;}
    string getId() {return id;}
    int getMileage() {return mileage;}

    void print()
    {
        cout << "name : " << name << endl;
        cout << "address : " << address << endl;
        cout << "tel : " << tel << endl;
        cout << "ID : " << id << endl;
        cout << "Mileage : " << mileage << endl; 
    }
};

int main()
{
    Customer c("Ted", "BaekMa", "010-2552-6374", "GotTed", 1000);
    c.print();

    return 0;
}