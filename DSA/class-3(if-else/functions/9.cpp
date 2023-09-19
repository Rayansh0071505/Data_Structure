#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[n],b[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<b[i]<<endl;
    }
    
    return 0;
}
