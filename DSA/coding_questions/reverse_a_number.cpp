// Write a code to reverse a number
// in pallindrome original number and reverse number are same like 1221 or 101

// if number is not reverse then add with its reverse and try to make it pallindrome
// for ex 200 is not pallindrome so 200 + reverse of 200 (002) = 202 and 202 is pallindrome
#include<iostream>
using namespace std;

bool pallindrome(int number)
{
   

    int original = number;
    int reversenumber=0;
    while(number>0)
    {
        // int reversenumber=0;
        int digit = number%10;
        reversenumber = reversenumber *10+digit;
        number = number/10;
    }
    return original == reversenumber; 
}
    int check(int n)
    {

        int original =n;
        int r = 0;
        while(n>0)
        {
        int digit = n%10;
        r = r*10+digit;
        n=n/10;
        }
        r=original+r;
        return r;
    }

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if (pallindrome(n))
    {
        cout<<"Yes it is ";
    }
    else
    {
        cout<<check(n)<<endl;
        if(pallindrome(check(n)))
        {
            cout<<"Yes now it is";
        }
    }
   

    
    return  0;

}