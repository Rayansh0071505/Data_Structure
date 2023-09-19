// basics

#include<iostream>
using namespace std;
int main()
{
    // declare 2d array
    int arr[3][3];

    //initialisation
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   
    cout<<brr[2][2]<<endl;

    cout<<" to print element row wise"<<endl;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<brr[i][j]<<" ";
                }
        cout<<endl;
    }

    cout<<" To print col wise ";
    cout<<endl;
       for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<brr[j][i]<<" ";
                }
        cout<<endl;
    }

    return 0;
}
