#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       for(int j=n;j>i;j--)
       {
        cout<<"_ ";
       }
       for(int k=1;k<=i;k++)
       {
        cout<<"x  ";
       }
       cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"_ ";
        }
        for(int k=n;k>=i;k--)
        {
            cout<<"x  ";
        }
        cout<<endl;
    }
}