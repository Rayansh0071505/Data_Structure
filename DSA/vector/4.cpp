// Union of 2 array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int arr[100]={11,2,32,4};
    int sizearr=4;
    int brr[100]={6,7,84,9};
    int sizebrr=4;

    vector<int> ans;

    for(int i=0;i<sizearr;i++)
    {
        ans.push_back(arr[i]);  // insertion is going on
    }
    
    for(int i=0;i<sizebrr;i++)
    {
        ans.push_back(brr[i]);
    }

    sort(ans.begin(), ans.end()); // sorting is here 

    cout<<"Print the array "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}