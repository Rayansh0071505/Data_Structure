#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"enter how many time you want to enter numner"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"change number to 1"<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=1;
        cout<<arr[i]<<" ";

    }
}