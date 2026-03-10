
#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int id;
    float cgpa;

    void display()
    {
             cout << "student Information :" <<endl;

        cout << "Name:" <<name<<endl;
        cout << "ID:" <<id<<endl;
        cout << "CGPA:" <<cgpa<<endl;

    }



};
int main()
{
    Student s1;
    s1.name="Rokon";
    s1.id=36;
    s1.cgpa=3.5;
    s1.display();
    return 0;




}



