// basics

#include<iostream>
using namespace std;

int main()
{
    int a=5;

    // pointer create - in pointer wew always store the address
    int* ptr = &a;

    // access the value ptr is pointing to
    cout<<*ptr <<endl;

    cout<<"Address of a is: "<<&a<<endl;
    cout<<"value stored at ptr is "<<ptr<<endl;
    cout<<"value ptr is pointing to is: "<<*ptr<<endl;
}