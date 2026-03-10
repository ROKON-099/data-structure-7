#include<iostream>
using namespace std;
class shape {
    public:


double area (double r)
{
    return 3.1416*r*r;

}
double area (double l, double w)
{
    return l*w;

}
double area (double b, double h,double w)
{
    return .5*b*h;

}




};
int main ()
{

    shape s1;
    cout << "Area of circle is:" << s1.area(5)<<endl;
    cout << "Area of reactangle is:" <<s1.area(5,4)<<endl;
    cout << "area of trianlge is:" << s1.area(5,4,0)<<endl;
    return 0;
}
