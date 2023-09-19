// find the missing term if number is in sorted order like 1 3 4 5 6 7 so missing is 2
#include<iostream>
#include<vector>
using namespace std;

void diff(vector<int>arr,int n)
{
    int start=1;
    int end=n-1;
    int i=1;
    int ans=0;
    int mid=start+(end-start)/2;
    int j=mid-1;
    int ele;
    int z;
    while(start<=end)
    {
    //   mid=start+(end-start)/2;
        
        if(arr[mid+i]-arr[mid]==1||arr[mid]-arr[j]==1)
        {
            // int i=1;
            z = mid;
            ele=z+1;
            i++;
            if(arr[ele]-arr[z]==1 && z<=end)
            {
                z++;

            }
            // else if(arr[mid]-arr[j]==1)
            // {
            //     mid--;
            //     j--;
            // }
            else
            {
                ans=arr[z]+1;
                cout<<ans;
                break;
            }
            }
      
        else
        {
            ans=arr[mid]+1;
            cout<<ans;
            break;
            // return arr[mid]+1;
        }
    }
    cout<<ans;

   
    // return ans;
}

int main()
{
    int n;
    cout<<"size ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the series ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Missing number is ";
    diff(arr,n);
    return 0;
}

// noot working