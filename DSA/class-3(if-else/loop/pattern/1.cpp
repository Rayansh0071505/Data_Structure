#include <iostream>
using namespace std;
int main()
{
    // rectangle patteren 3x5
    for(int row=0;row<3;row++) // outer loop is always for row
    {
        for(int col=0;col<5;col++) // inner loop is always for column
        {
            cout<<"x ";
        }
        cout<<endl;
    }
}