#include<iostream>
using namespace std;
class bank{
string name;
int account num;
int balance;

void deposit(double amount)
{
    balance+=amount;
    cout << "deposited:" <<amount<<endl;

}
void withdraw (double amount)
 {
     if (balance> amount)
        cout << "insuficient balance:"<<endl;

 }
 else {

    balance+=amount;
    cout << "widthdraw:" <<amount<<endl;

 }



};
