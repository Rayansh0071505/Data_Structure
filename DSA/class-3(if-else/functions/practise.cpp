// Write a program to print the sum of two numbers entered by user by defining your own function.
#include<iostream>
using namespace std;
// int sum(int a,int b)
// {
//    int c=a+b;
//    return c;
// }

// int main()
// {
//     int d,e;
//     cout<<"Enter the 2 nos.";

//     cin>>d>>e;
//     cout<<sum(d,e);
//     return 0;

// }


// Define a function that returns the product of two numbers entered by user.

// int pro(int a,int b)
// {
//     int c = a*b;
//     return c;
// }

// int main()
// {
//     int d,e;
//     cin>>d>>e;
//     cout<<pro(d,e);
//     return 0;
// }

// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
// void circle(int r)
// {
//     int area = r*r;

//     float circumfrence = 2* 22/7*r; 
//     cout<<"The area is "<<area<<endl<<"the circumfrence is "<<circumfrence;
// }

// int main()
// {
//     int radius;
//     cout<<"Enter the radius";
//     cin>>radius;
//     circle(radius);
//     return 0;
    
// }


// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

// int minimum(int a,int b,int c)
// {
//     return min(min(a,b),c);
// }

// int maximum(int a,int b,int c)
// {
//     return max(max(a,b),c);
// }

// int main()
// {
//     int first,second,third;
//     cout<<"Enter three nos. ";
//     cin>>first>>second>>third;

//     cout<<"The max term is "<<maximum(first,second,third)<<endl;
//     cout<<"The min term is "<<minimum(first,second,third)<<endl;
//     return 0; 
// }

// Define a program to find out whether a given number is even or odd.

void check(int a)
{
    if((a/2)*a==a)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}

int main()
{
    int num;
    cin>>num;
    check(num);
    return 0;
}