// Negative Elements in 1D Array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[20];

    cout<<"Enter the array's size: ";
    cin>>n;

    cout<<"Enter array's elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    cout<<"Negative elements from an Array: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<", ";
        }
    }
    return 0;
}