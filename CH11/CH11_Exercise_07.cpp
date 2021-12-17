#include <iostream>
#include <string>
using namespace std;

class TV
{
    int size;
    string brand;
    int price;
public:
    TV() {cout << "TV 생성자" << endl; }
    ~TV() {}
    void setSize(int s) { size = s;}
    void setBrand(string v) { brand = v;}
    void setPrice(int p) { price = p;}
    int getSize() {return size;}
    string getBrnad() { return brand;}
    int getPrice() {return price;}
};

class IPTV : public TV
{
    int ipaddress;
public:
    IPTV() {cout << "IPTV 생성자" << endl;}
    ~IPTV() { }
    void setIpaddress(int i) {ipaddress = i;}
    int getIpaddress() { return ipaddress;}
};

int main()
{
    IPTV kt;
    
}
