#include <iostream>
using namespace std;
int main()
{
    int row_count;
    cin>>row_count;
    for(int i=row_count;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
