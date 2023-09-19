// Pair sum
// find a pair that upon addition give value equal to sum 9

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"INput the series "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The pairs are "<<endl;
    for(int i=0;i<n;i++)
    {
        int e=arr[i];
        for(int j=n;j>i;j--)
        // here the loop is for outer loop its done so repeated pair does not occur twice like
        // (7,2) should not read like (2,7) it should be readed ones only thats why we are decreasing value one by one from the end or inner loop
        // or you can use j=i+1
        {
            if(e+arr[j]==9)
            {
                cout<<e<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}