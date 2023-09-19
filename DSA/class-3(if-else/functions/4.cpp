#include<iostream>
using namespace std;

void grade(int n)
{
    if(n>90)
    {
        cout<<"A";
    }
    else if(n>80)
    {
        cout<<"B";
    }
    else if(n>70)
    {
        cout<<"C";
    }
    else
    cout<<"D";

    
}

int main()
{
    int num;
    cout<<"Student get this number "<<endl;
    cin>>num;

    cout<<"The Grade he/she get is ";
    grade(num);

    return 0;
}