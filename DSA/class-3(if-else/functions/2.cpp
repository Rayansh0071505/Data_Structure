// function to add 2 number

#include<iostream>
using namespace std;

int add(int a,int b)
{
   int result = a+b; 
//    cout<<"The sum of number is ";
   return result;

   
}

int findmax(int x,int y,int z)
{
   
   if(x>y && x>z)
   {
      
      // cout<<x<<" is max"<<endl;
      return x;
   }
   else if(y>x && y>z)
   {
      
      // cout<<y<<" is max"<<endl;
      return y;
   }
   else
   return z;
   
} 


int main()
{
    int n,m,sum,o;
    cout<<"Enter first nos. "<<endl;
    cin>>n;

    cout<<"Enter second nos"<<endl;
    cin>>m;
    
    cout<<"Enter the third nos"<<endl;
    cin>>o;
    
    sum = add(n,m);
    cout<<"The sum is "<<sum<<endl;

    cout<<"address of sum is "<<&sum<<endl;

    cout<< "The max nos is "<<findmax(n,m,o);

    return 0;
}


// pass by value - copy create krna

//42

