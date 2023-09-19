// To print sum of even number

#include <iostream>

using namespace std;

int sum_even(int n)
{
    int sum=0;
    for(int i=2;i<=n;i=i+2)
    {
        // if(i%2==0) 
        // modulus operation is heavy code so try to avoid it for better processing
        
        sum=sum+i;
        
    }
    return sum;
}

int main()
{
    int num;
    cout<<"The num is "<<endl;
    cin>>num;

    cout<<"The total is "<<sum_even(num);
}