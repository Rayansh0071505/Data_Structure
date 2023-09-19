// Transpose 2d matrix

#include<iostream>
using namespace std;

void swap(int arr[][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,m,arr[10][10];
    cin>>n>>m;
    cout<<"Enter the series ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Series "<<endl;
    swap(arr,n,m);
    return 0;
  