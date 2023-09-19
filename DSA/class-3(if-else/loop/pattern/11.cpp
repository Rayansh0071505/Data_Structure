#include <iostream>
using namespace std;
int main()
{
    int n,num=2;
    cin>>n;
    for(int i=1;i<=1;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"_ ";
        }
        cout<<i<<" ";
        cout<<endl;
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"_ ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<num<<"  ";
            num++;
        }
        // for(int l=i+1;l>=i;l--)
        // {
        //     cout<<l<<" ";
        // }
        
        cout<<endl;
    }
    return 0;
}
