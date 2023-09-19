#include<iostream>
using namespace std;

int factorial(int n)
{
    int pro=1;
    for(int i=n;i>0;i--)
    {
        pro=pro*i;       
    }
    return pro;
}

int main()
{
   int num;
   cout<<"Enter the number "<<endl;
   cin>>num;

   cout<<"The factorial is "<<factorial(num);
   return 0;
}