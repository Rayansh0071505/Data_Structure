#include <iostream>
using namespace std;
int main()
{
    // reverse pyramid
    int row;
    cin>>row;
    // for(int i=row;i>0;i--)
    // {
    //     for(int j=i;j>0;j--)
    //     {
    //         cout<<"x ";
    //     }
    //     cout<<endl;
    // }

    //or
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            cout<<"x ";
        }
        cout<<endl;
    }
}