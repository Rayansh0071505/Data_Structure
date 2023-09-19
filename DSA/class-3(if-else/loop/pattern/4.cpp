#include <iostream>
using namespace std;
int main()
{
    //hollow rectangle
    for(int row =0;row<3;row++)
    {
        if(row == 0||row==2)
        {
            for(int col=0;col<5;col++)
            {
                cout<<"x ";
            }
            
        }
        else
        {
            cout<<"x ";
            for(int col=0;col<3;col++)
            {
                cout<<"  ";

            }
            cout<<"x ";

        }cout<<endl;
    }
}