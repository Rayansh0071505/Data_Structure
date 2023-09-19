// Find the first occurence of the given number at what place
#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int middle=start +(end-start)/2;
    for(int i=0;i<n;i++)
    {
        int m=arr[middle];
        if(key==m)
        {
            return middle;
        }
        else if(key<m)
        {
            end=middle-1;
        }
        else if(key>m)
        {
            start=middle+1;
        }
        middle=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int n,arr[10],key;
    cin>>n>>key;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(search(arr,n,key)==-1)
    {
        cout<<"Not found";
    }
    else
    cout<<"Found at "<<search(arr,n,key);
    return 0;
}