// total number of occurence
/*
logic- we will substract last occurence - first occurence and add it with 1 so total number can be found
for ex - 1 2 3 3 3 3 4 5
so first occurence is at 3rd pos
last occurence as 6th pos 
so total occurence = last occurence - first occurence + 1 
i.e = 6-3+1=4 time it occur
*/

#include<iostream>
#include<vector>
using namespace std;

int last_occurence(vector<int>arr,int n,int target)
    {
        int start=0;
        int end=n-1;
        int mid = start+(end-start)/2;
        int ans=-1;
        while(start<=end)
        {
            if (arr[mid]==target)
            {
                ans =mid;
                start=mid+1;
            } 
            else if(arr[mid]>target)
            {
                end=mid-1;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;           
        }
        return ans;
    //   return -1;
    }
int first_occurence(vector<int>arr,int n,int target)
    {
        int start=0;
        int end=n-1;
        int mid = start+(end-start)/2;
        int las=-1;
        // for(int i=0;i<=end;i++)
         while(start<=end)

        {
            if (arr[mid]==target)
            {
                las =mid;
                end=mid-1;
            } 
            else if(arr[mid]>target)
            {
                end=mid-1;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;           
        }
        return las;
        // return -1;
    }


int find(vector<int>arr,int n,int target)
{
    // cout<<last_occurence(arr,n,target)<<endl;
    // cout<<first_occurence(arr,n,target)<<endl;
    return last_occurence(arr,n,target)- first_occurence(arr,n,target)+1;    
}

int main()
{
    int n,key;
    cout<<"Enter the size and target- ";
    cin>>n>>key;
    vector<int>arr(n);
    cout<<"Enter the Series- ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(find(arr,n,key)==(-1))
    {
        cout<<"Not Found";
    }
    else
    {
    cout<<"The occurence of "<<key<<" is "<<find(arr,n,key);
    }
    // cout<<find(arr,n,key);
    return 0;

}