// Triplet sum
// find a triplet that upon addition give value equal to given sum

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the size "<<endl;
    cin>>n;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    vector<int>arr(n);
    cout<<"Enter the series "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The triplet are- "<<endl;

    for(int i=0;i<n;i++)
    {
        int f=arr[i];
        for(int j=i+1;j<n;j++)
        {
            int s=arr[j];
            for(int l=j+1;l<n;l++)
            {
                if(f+s+arr[l]==sum)
                {
                    cout<<f<<" "<<s<<" "<<arr[l]<<endl;
                }
            }
        }
    }
    return 0;
}

// understanding

// here our input is 10 20 30 40 50
// so we need to do in such way each number read input forwardd not backward like 10 read 20 30 40 50 , 20 read 30 40 50 and 
// 30 read 40 50 and 40 read 50
// so each loop should start after one space like if i=0 i.e 10 then j should start from pos 1 i.e 20 and l should start pos 3 i.e 30
// if loop find the result its ok other wise increase the value of l one by one i.e
// when i=0 i.e 10 and j=i+1 i.e 20 l wil read j+1 if fail then j+2 then j+3, after that j will increase value i+2 then i+3 so on
// i.e 10,20,30 10,20,40 10,20,50 if fail then 10,30,40,  10,30,50 then if fail  10,40,50 then if fail 20,30,40 
// ans so on  
