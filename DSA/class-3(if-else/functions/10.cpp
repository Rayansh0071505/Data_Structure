#include<iostream>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"its prime ";
            break;
        }
        else
        {
            cout<<"not a prime ";
            break;
        }
    }
    return n;
}
int main()
{
  int num;
  cout<<"Enter the number "<<endl;
  cin>>num;
  prime(num);
}