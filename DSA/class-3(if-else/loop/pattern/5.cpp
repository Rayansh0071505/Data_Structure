#include <iostream>
using namespace std;
int main()
{
    // custom made hollow rectangle

    int colcount, rolcount;
    cin>>colcount>>rolcount;
    for(int row=0;row<rolcount;row++)
    {
        if(row==0 || row==rolcount-1)
        {
            for(int col=0;col<colcount;col++)
            {
                cout<<"x ";
            }
        }
        else
        {
            cout<<"x ";
            for(int col=0;col<colcount-2;col++)
            {
                cout<<"  ";
            }
            cout<<"x ";

        }
        cout<<endl;

    }
}