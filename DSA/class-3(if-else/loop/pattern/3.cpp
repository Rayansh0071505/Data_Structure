#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    // input the user to o/p no. of rows and col
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"x ";
        }
        cout<<endl;
    }
}