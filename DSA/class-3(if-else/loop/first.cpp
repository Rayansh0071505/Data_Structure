#include <iostream>
using namespace std;
int main()
{
    int score;

    cout<<"Enter the score";
    cin>>score;

    if(score<300)
    {
        cout<<"India win"<<endl;
    }
    else
    {
        cout<<"Pakistan wins"<<endl;
    }
}