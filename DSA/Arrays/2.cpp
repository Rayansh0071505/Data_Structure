#include<iostream>
using namespace std;
int main()
{
    char arr[4]={'a','b','c','d'};
    cout<<arr[2]<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
}


// for character allocation allocate character with single quotes only
// how does compiler get value from arr[0]
// it uses this logic value at(base address + index * size(datatype))