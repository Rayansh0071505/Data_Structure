#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=1;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"_ ";
        }
        cout<<"x  ";
        cout<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout<<"_ ";
        }
      
        for(int l=2;l<=2;)
        {
            cout<<"x  ";
        }

        cout<<endl;
        
    }
}