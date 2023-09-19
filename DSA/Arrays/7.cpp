// check in array which number is greatest

#include<iostream>
using namespace std;

int check(int arr[],int key,int size)
{
    int max=INT16_MIN;
    for(int i=1;i<=size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;

}
int main()
{
    int num,key,arr[100];
    cout<<"Enter the size "<<endl;
    cin>>num;
    cout<<"enter the key "<<endl;
    cin>>key;
    cout<<"Enter the series "<<endl;
    for(int i=1;i<=num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The max number are "<<check(arr,key,num);
   
    return 0;
}