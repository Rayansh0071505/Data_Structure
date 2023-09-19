#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    // int mid = (start+end)/2;
    int mid = (start+(end-start)/2);
    // this is more optimise way so value would never be overflow like int highest value is 2^31-1 so write this way for more optimise
    for(int i=0;i<=end;i++)
    {
        int element = arr[mid];
        if(element=key)
        {
            return mid;
        }
        else if(key>element)
        {
            start=mid+1;
        }
        else if(key<element)
        {
            end=mid-1;
        }
        mid = (start+(end-start)/2);

    }
    return -1;
}

int main()
{
    int arr[10],n,key;
    cout<<"Enter the size ";
    cin>>n;
    cout<<"Enter the key ";
    cin>>key;
    cout<<"Enter the series ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(search(arr,n,key)==-1)
    {
        cout<<"Not found";
    }
    else
    {
        // cout<<"Found at ";
        cout<<"Found at "<<search(arr,n,key);

    }
    return 0;
}

// Time Complexity - O(logn) - its like O(n/2) half of O(n)
// i found if you return any value in int but add any other value like here we cout found it will not return exxact value of mid
// untill and unless you call for it, like i have done