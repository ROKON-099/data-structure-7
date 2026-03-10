#include<iostream>
using namespace std;
class reactangle
{
public:

    int width;
    int lenght;

    void display()
    {
        cout << "length is:" <<lenght <<endl;
        cout << "Width is :" <<width <<endl;
        cout << "Area is :" <<(lenght*width)<<endl;
        cout << "Perimeter is :" << (2*(lenght+width)) <<endl;



    }



};

   int main(){
   reactangle react;
   react.width=6;
   react.lenght=5;
   react.display();
   return 0;




   }
