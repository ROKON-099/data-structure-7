#include<iostream>
using namespace std;
class BankAcount{
    public:
string name;
int accountnumber ;
double balance;

void deposit(double amount)
{
    balance+=amount;
    cout << "Deposited:"<<amount<<endl;

}
void withdraw (double amount)
{
    if (amount >balance)
    {


        cout << " Insuficient balance !"<<endl;
    }
    else {
            balance-=amount;

       cout << "Withdraw:"<<amount<<endl;
    }

}
void display(){

cout << "Acount holder:" <<name<<endl;
cout << "Acount NUmber:"<<accountnumber<<endl;
cout << "Balance:"<<balance<<endl;



}



};
int main(){
 BankAcount B1;
B1.name="Rokon";
B1.accountnumber=11200;
B1.balance=5000;
B1.display();
cout <<endl;

B1.deposit(300);
B1.withdraw(500);
cout <<endl;

B1.display();

}
