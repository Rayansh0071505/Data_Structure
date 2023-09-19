#include<iostream>
using namespace std;

int count(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=i;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"enter the num "<<endl;
    cin>>num;
    
    cout<<"Total count is "<<count(num);
    return 0;
}