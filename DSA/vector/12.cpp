// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void find(vector<int>arr,int n)
{
    int c=1;
    int start=1;
    vector<int>list;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[start])
        {
            c++;
            if(n/2<=c)
            {
                list.push_back(arr[i]);
                c=1;
            }
        }
        start++;
        if(start==n)
        {
            break;
        }
    }
    cout<<"Total elements are "<<list.size()<<endl;
    for(int i=0;i<list.size();i++)
    {
        cout<<list[i]<<" ";
    }    
}

int main()
{
    int n;
    cout<<"Enter the size ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the series ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    find(arr,n);
    return 0;
}