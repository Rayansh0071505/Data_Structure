// find nmber of zeros and ones

#include<iostream>
using namespace std;

void count(int arr[],int size)
{
    int c=0,d=0;
    for(int i=1;i<=size;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    cout<<"The number of zeros are "<<c<<endl;
    cout<<"The number of ones are "<<d;

}
int main()
{
    int arr[100],size;
    cout<<"Enter the size ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the series "<<endl;
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    cout<<"the value is ";
    count(arr,size);
}

// tip - if you have void in function you cant print it with cout you have to print it seperately 
// like cout<<"hello"<<hi(arr,size); - wrong as hi function was written with void
// you have to do like this cout<<"hello"; hi(arr,size);