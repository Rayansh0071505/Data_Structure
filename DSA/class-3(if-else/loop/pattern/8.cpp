#include <iostream>
using namespace std;
int main()
{
    int row_count;
    cin>>row_count;
    // for(int i=1;i<=row_count;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //or
    for(int i=0;i<row_count;i++)
    {
       for(int j=0;j<=i;j++)
       {
        cout<<j+1<<" ";
       } 
       cout<<endl;
    }
}