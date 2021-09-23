#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int balance;
    double rate;
public:
    BankAccount(int b = 0, double r = 5){
        balance = b;
        rate = r;
    }
    int deposit(int a);
    int withdraw(int a);
};

int BankAccount::deposit(int a){
    balance = balance + a;
    return balance;
}

int BankAccount::withdraw(int a){
    balance = balance - a;
    return balance;
}

int main(){
    BankAccount myBank(100000, 2.32f);
    cout << myBank.deposit(100000) << "원" << endl;
    cout << myBank.withdraw(50000) << "원" << endl;
}