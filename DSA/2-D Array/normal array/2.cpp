// to print row-wise sum print

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,sum;
    int arr[100][100];
    cout<<"Input number of rows and col respectively - ";
    cin>>n>>m;
    cout<<"Enter the series "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The sum of row is - ";
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
            
        }
        cout<<sum<<endl;
        
    }
    return 0;
}