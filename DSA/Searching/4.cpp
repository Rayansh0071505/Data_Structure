// Find the last occurence of the given number at what place
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>a, int n,int target)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans;
    for(int i=0;i<=e;i++)
    {
        if(target==a[m])
        {
            ans=m;
            s=m+1;            
        }
        else if(target>a[m])
        {
            s=m+1;
        }
        else if(target<a[m])
        {
            e=m-1;
        }
        if(s>e)
        {
            break;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,n,key);
}
/*
do the dry run you will understand
i/p- 8 4
   1 2 3 4 4 4 4 4
o/p - should be 7
*/