// for loop each char

#include<iostream>
using namespace std;
int main()
{
    char ch[100];
    cin>>ch; 
    for(int i=0;i<8;i++)
    {
        cout<<"index: "<<i<<" value: "<<ch[i]<<endl;
    }  
    int value = (int)ch[7]; // as 8th value is blank so it will take directly it as 0
    cout<<"value is: "<<value<<endl;

    return 0;
}