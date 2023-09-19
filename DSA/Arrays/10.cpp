// if num = 1110111 given how to calculate number of one and zero

#include<iostream>
using namespace std;
int main()
{
    string s;
    int zero=0;
    int one=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')// string so comapre with literal not integer
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if(one>zero)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}