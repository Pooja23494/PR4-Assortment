// Sum of Element in Row & Column in 2D Array.

#include<iostream>
using namespace std;

int main(){

    int row,col,index,sumrow=0,sumcol=0;
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
    cout<<endl;
    cout<<"Enter row number: ";
    cin>>index;
    cout<<"Elements of row "<<index<<": ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==index)
            {
                cout<<a[i][j]<<", ";
                sumrow+=a[i][j];
            }
        }
    }
    cout<<endl<<"The sum of row "<<index<<": " <<sumrow;

    cout<<endl;
    cout<<endl;
    cout<<"Enter column number: ";
    cin>>index;
    cout<<"Elements of coulmn "<<index<<": ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j==index)
            {
                cout<<a[i][j]<<", ";
                sumcol+=a[i][j];
            }
        }
    }
    cout<<endl<<"The sum of column "<<index<<": " <<sumcol;
    return 0;
}