#include <iostream>
using namespace std;
int main()
{
    int row_count;
    cin>>row_count;
    for(int i=1;i<=row_count;i++)
    {
        for(int j=row_count;j>i;j--)
        {
            cout<<"_ ";
        }
        
        for(int k=1;k<=i;k++)
        {
            cout<<"x  ";
        }
        
        cout<<endl;
    }
}