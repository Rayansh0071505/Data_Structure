// start printing from starting and ending

#include<iostream>
using namespace std;

void check(int arr[],int size)
{
    if ((size/2)*2==size)
    {
    for(int i=0;i<size/2;i++)
    {
       
        if(arr[i+1]==arr[size-i])
        {
            cout<<arr[i+1];
            break;
        }
        cout<<arr[i+1]<<endl;
        cout<<arr[size-i]<<endl;
    }
    }
    else
    {
        for(int i=0;i<=size/2;i++)
    {
       
        if(arr[i+1]==arr[size-i])
        {
            cout<<arr[i+1];
            break;
        }
        cout<<arr[i+1]<<endl;
        cout<<arr[size-i]<<endl;

    }
}}

int main()
{
    int size,arr[100];
    cin>>size;
    cout<<"Enter the series "<<endl;
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    check(arr,size);
    return 0;
}
