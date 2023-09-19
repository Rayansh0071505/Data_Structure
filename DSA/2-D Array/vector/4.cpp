// Shift the  2d matrix 90 clockwise 

#include<iostream>
#include<vector>
using namespace std;
void arrange(vector<vector<int> >arr,int r,int c)
{
    cout<<"Rotated series "<<endl;
    for(int i=0;i<r;i++)
    {
        int n=c-1;
        
        for(int j=n;j>=0;j--)
        {
            cout<<arr[j][i]<<" ";                        
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int> >arr(r,vector<int>(c));
      for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];                        
        }
    }
    arrange(arr,r,c);
    return 0;
}

/*
understanding
->here take example of input 
1 2 3
4 5 6
7 8 9

so we need output need 
7 4 1
8 5 2
9 6 3

as here we take i=0 and j=c-1 i.e j=2
so at step 1 we have loop [2][0] [1][0] [0][0] 
i.e 7 4 1
then at step 2 [2][2] [2][1] [2][0]
i.e 7 4 1
    8 5 2
and step 3 is same so we have our rotated array
7 4 1
8 5 2
9 6 3


->
*/

// Transpose of matrix
#include<iostream>
#include<vector>
using namespace std;
void arrange(vector<vector<int> >arr,int r,int c)
{
    cout<<"Rotated series "<<endl;
    for(int i=0;i<c;i++)
    {
        int n=c-1;
        
        for(int j=0;j<r;j++)
        {
            cout<<arr[j][i]<<" ";                        
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int> >arr(r,vector<int>(c));
      for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];                        
        }
    }
    arrange(arr,r,c);
    return 0;
}

/*
understanding-
here we have to exchange number of rows with column so that 3x4 can be convert to 4x3
so in function we started loop i with col instead of rows and loop j with row instead of col

this method works for every matrix
*/