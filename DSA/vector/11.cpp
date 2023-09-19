// In this program, we need to rotate the elements of an array towards the left by the specified number of times.
// In the left rotation, each element of the array will be shifted to its left by one position and the first element of the array 
// will be added to end of the list.

#include<iostream>
#include<vector>
using namespace std;

void swaps(vector<int>arr,int n,int t)
{
    // int end=n-1;
    for(int j=0;j<t;j++)
    {
        int start=1;
        for(int i=0;i<n;i++)
        {
            if(start>i)
            {
                swap(arr[i],arr[start]);
                start++;
            }
            if(start==n)
            {
                break;
            }
        }
    }
    cout<<"The loop statement is - ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n,t;
    cout<<"Enter the size - ";
    cin>>n;
    cout<<"How many times you want to run loop ";
    cin>>t;
    cout<<endl;
    vector<int>arr(n);
    cout<<"Enter the series- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    swaps(arr,n,t);
}