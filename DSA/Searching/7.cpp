// FInd the peak element like 0 10 5 2 given so peak element is 10 
// leetcode question - peek element

#include<iostream>
#include<vector>
using namespace std;
int peakelement(vector<int>arr,int n)
{
    int peak;
    int start = 0;
    int end= n-1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]>=arr[start] && start<=mid )
        {
            peak=arr[mid];
            start++;
            // end--;
        }
        else
        {
            peak=arr[start];
        }
        if(arr[mid]>=arr[end] && end>=mid)
        {
            peak = arr[mid];
            end--;            
        }
        else
        {
            peak = arr[end];
        }        
    }
    return peak;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Peak is "<<peakelement(arr,n);
    return 0;
}

// see in binary search it should always be in sorted order like in this case its creating 2 line 0 10 8 2 so 0-10 increase 
/*
and 10-2 decreasing so if any value is not returning it means our array is not in sorted order
*/
