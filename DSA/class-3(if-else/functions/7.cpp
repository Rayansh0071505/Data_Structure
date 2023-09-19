// Find number is Even or odd
#include<iostream>
using namespace std;

int find(int n)
{
    int sum=n;
    if((n/2)*2==n)
    {
        
        cout<<"Even ";
        
    }
    else
    cout<<"Odd ";
    return sum;
}

int main()
{
    int num;
    cin>>num;
    cout<<find(num);
}
