// sorting 0 and 1 
// put 0 to the left and 1 to right

#include<iostream>
#include<vector>
using namespace std;

void swaps(vector<int>arr,int n)
{
    int start=0;
    int end=n-1;
   for(int i=0;i<n;i++)
//    for(int i=0;i<=end;i++)
   {
    if(arr[i]==0)
    {
        swap(arr[start],arr[i]);
        start++;
    }
    else if( arr[i]==1)
    {
        swap(arr[end],arr[i]);
        end--;
    }
    if(start==end)
    {
        break;
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
   
}

int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the series "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The sorted array is "<<endl;
    swaps(arr,n);
    

}


// try dry run you will understand
// here i<=end will work initially if you use that statement there is no need to write start==end and break condition
// do dry run please