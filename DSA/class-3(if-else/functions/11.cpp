// print all prime number 1-n
#include<iostream>
using namespace std;

void print(int t)
{
    for(int i=2;i<=t;i++)
    {        
        if(t%i==0)
        {
            cout<<i<<endl;

        }
    }
    
}

int main()
{
    int total;
    cin>>total;
    print(total);
}