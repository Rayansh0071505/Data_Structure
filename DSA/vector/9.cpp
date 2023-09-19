// quadrateral sum
// find a four number that upon addition give value equal to given sum

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    vector<int>arr(n);
    cout<<"the series is "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"print the sum "<<endl;
    cin>>sum;
    cout<<"The pair is "<<endl;
    for(int i=0;i<n;i++)
    {
        int f=arr[i];
        for(int j=i+1;j<n;j++)
        {
            int s=arr[j];
            for(int k=j+1;k<n;k++)
            {
                int t=arr[k];
                for(int l=k+1;l<n;l++)
                {
                    if(f+s+t+arr[l]==sum)
                    {
                        cout<<f<<" "<<s<<" "<<t<<" "<<arr[l]<<endl;
                    }
                }
            }
        }
    }
}