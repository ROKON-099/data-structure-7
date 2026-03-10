#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin>>n;
    cout << "Enter " <<n << " number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    int*ptr=arr;
    for (int i=0; i<n; i++)
    {
        sum +=*(ptr+i);

    }
    cout << "Sum :" <<sum<<endl;
}

