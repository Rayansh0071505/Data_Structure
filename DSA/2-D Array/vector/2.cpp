// Basic -2

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row=3;
    int col=5;

    // vector<vector<int> >arr(row,vector<int>(col,69));
    // this line means 3 row 5 col value filled with 69

    vector<vector<int> >arr(3,vector<int>(5,0));
    // this line show 5 row 5 col initialise with the value of 0

    // vector<vector> means 2d array banana
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}