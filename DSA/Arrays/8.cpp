// check if number is present in array

#include<iostream>
using namespace std;

bool find(int arr[],int key,int size)
{
    
    for(int i=1;i<=size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
         
    }
    return false;
   
}

int main()
{
    int arr[100],key,size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    cout<<"Enter the number to found "<<endl;
    cin>>key;
    cout<<"Enter the series "<<endl;
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    if(find(arr,key,size))
    {
        cout<<"Found ";
    }
    else
    {
        cout<<"Not found ";
    }
    return 0;
}