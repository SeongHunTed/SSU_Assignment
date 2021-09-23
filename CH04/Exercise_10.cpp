#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    string number;
    int balance;

public:
    void init(string n, int b);
    void deposit(int amount);
    void withdraw(int amount);
};

void BankAccount::init(string n, int b){
    number = n; //계좌번호
    balance = b; // 잔액
    cout << "현재 잔액 : " << balance << endl;
}

void BankAccount::deposit(int amount){
    balance += amount;
    cout << "after deposit (" << amount << ") 현재 잔액 : " << balance << endl;
}

void BankAccount::withdraw(int amount){
    balance -= amount;
    cout << "after withdraw (" << amount << ") 현재 잔액 : " << balance << endl; 
}

int main(){
    BankAccount myBank;
    myBank.init("110-373-882284", 100000);
    myBank.deposit(100000);
    myBank.withdraw(100000);
}