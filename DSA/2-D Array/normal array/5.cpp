// Find min/max of 2d array

#include<iostream>
using namespace std;

void max(int arr[][10],int n,int m)
{
    int maxi =INT16_MIN;
    int s =INT16_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]>=maxi)
            {
                maxi=arr[i][j];
            }
            if(arr[i][j]<=s)
            {
                s=arr[i][j];
            }
        }
    }
    cout<<"Max is "<<maxi<<" "<<"small is "<<s<<endl;
}

int main()
{
    int n,m,arr[10][10];
    cout<<"No of rows and columns respectively ";
    cin>>n>>m;
    cout<<"Enter the series "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    max(arr,n,m);
    return 0;
    
}