#include<iostream>
using namespace std;
class Animal{
public:
    string name;

    void displayAnimal(){

    cout << "Kingdom name is :"<<name<<endl;

    }


};
class Mammal : public Animal{
public:
    string Mname;


    void displayMammal(){
        displayAnimal();
    cout << "Phylum name is:" <<Mname <<endl;

    }


};
class Dog :public Mammal{
public:
    string Sname;

    void display(){
    displayMammal();
    cout << "Speaces name is:" <<Sname <<endl;

    }


};
int main (){
Dog D1;
D1.name="Animal";
D1.Mname="Mammal";
D1.Sname="dog";
D1.display();







}
