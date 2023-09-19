// pointers have same base address for more info read 'read' point 8

#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int* p = arr;
    cout<<"with pointer pointing "<<p;
    return 0;
    
}