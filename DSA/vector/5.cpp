// Insertion of 2 array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> brr(m);
    cout<<"Enter arr series "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter brr series "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    vector<int>ans;
    int element;

    for(int i=0;i<arr.size();i++)
    {
        element = arr[i];
        for(int j=0;j<brr.size();j++)
        {
            if(brr[j]==element)
            {
                brr[j]=INT16_MIN;
                // here if 2 times 3 comes so to avoid printing 2 times we will mark up the array element as int_min 
                // for ex in arr 3 comes two times and in brr 1 times so we need to check common element so we need to print 3 one time 
                // thats after it compare and print 3 one time we will change its value in brr[j]
                ans.push_back(element);
            }
        }
    }
    cout<<"the unique instersection number are "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}