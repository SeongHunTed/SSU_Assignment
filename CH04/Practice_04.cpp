#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    float balance; // 계좌 잔고
    float interest; //정기, 보통 예금 이율

public:
    void deposit(float amount); // 입금
    void withdraw(float amount); // 출금
    void dsc_interest(float a); // 이율 결정 적용 (기간에 따른)
    void give_interest(float amount); //이자 지급

};