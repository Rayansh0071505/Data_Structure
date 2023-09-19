// find number of 2s or given digit
#include<iostream>
using namespace std;

int count(int arr[],int size,int key)
{
    int c=0;
    for(int i=1;i<=size;i++)
    {
        if(arr[i]==key)
        {
            c++;
        }
    }
    cout<<"key occurence "<<c;
    return 0;
}

int main()
{
    int arr[100],size,key;
    cout<<"Enter the size ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the key ";
    cin>>key;
    cout<<endl;
    cout<<"Enter the series ";
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    count(arr,size,key);
}