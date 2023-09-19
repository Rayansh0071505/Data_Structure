// char pointer and int pointer works differently
// read point 12

#include<iostream>
using namespace std;

int main()
{

    int arr[6]={1,2,3,4,5};
    int* p =arr;

    char ch[10] = "rayansh";
    char* c =ch;

    cout<<"Pointer of arr "<<p<<"   - print the base address"<<endl;
    cout<<"Pointer of ch "<<c<< "    - print the whole string"<<endl;
    cout<<"arr dept "<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    cout<<"char dept "<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;


}

