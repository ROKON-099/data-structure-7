#include<iostream>
using namespace std;
class bankAcount
{
public:
    string name;
    int num;
    int bal;

    void deposit(double amount)
    {
        bal+=amount;
        cout << "deposited:" <<amount <<endl;

    }
    void withdraw (double amount)
    {
        if (amount> bal)
        {
            cout << "insuficient balance:"<<endl;
        }



        else
        {

            bal-=amount;

            cout << "Withdrawn:" <<amount <<endl;

        }
    }
    void display()
    {

        cout << "name:"<<name <<endl;
        cout << "num:" <<num <<endl;
        cout << "Balance:" <<bal<<endl;



    }



};

int main()
{
    bankAcount b1;
    b1.name="Rokon";
    b1.num=11200;
    b1.bal=20;
    b1.display();
    cout <<endl;

    b1.deposit(0);
    b1.withdraw(10);
    cout <<endl;

    b1.display();
    return 0;






}
