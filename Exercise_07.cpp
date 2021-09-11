#include <iostream>
#include <string>

using namespace std;

class CellPhone
{
    bool on;
    string number;
    string model;
    string color;

    public:
        void setCellPhone(bool o, string n, string m, string c);
        void setOn();
        void printCellPhone();
};

void CellPhone::setCellPhone(bool o, string n, string m, string c){
    on = o;
    number = n;
    model = m;
    color = c;

}

void CellPhone::setOn(){
    if (on == false) on = true;
    else on = false;
}

void CellPhone::printCellPhone(){
    cout << "CellPhone :" << endl;
    cout << number << endl;
    cout << model << endl;
    cout << color << endl;
    if (on == true) cout<< "true" <<endl;
    else cout << "false" << endl;
    
}

int main(){
    CellPhone myPhone;
    myPhone.setCellPhone(false,"010-1234-5678","Galaxy","Black");
    myPhone.setOn();
    myPhone.printCellPhone();
}