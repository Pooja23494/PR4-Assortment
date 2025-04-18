// Largest element in 2D Array.

#include<iostream>
using namespace std;

int main(){

    int row,col,max;
    int a[20][20];

    cout<<"Enter the array's row size: ";
    cin>>row;
    cout<<"Enter the array's column size: ";
    cin>>col;

    cout<<"Enter the array's elements: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    max=a[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    cout<<"The largest element is: "<<max;
    return 0;
}