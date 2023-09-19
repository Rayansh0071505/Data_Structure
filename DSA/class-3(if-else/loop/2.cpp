#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;

    if(marks>=90)
    {
        cout<<"A Grade";
    }
    else if(marks>=80)
    {
        cout<<"B grade";

    }
    else if(marks>=70)
    {
        cout<<"C Grade";
    }
    else
    {
        cout<<"D Grade";
    }
}