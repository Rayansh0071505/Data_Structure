// here we have to union two array but remove the common element if it occur both in second or first list like
// first list =1,2,3,4 and second list = 2,3,5,6 so our answer should be like 1,2,3,4,5,6 ignore common element

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>arr(n);
    vector<int>brr(m);
    vector<int>ans;
    cout<<"input the series "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }

    for(int i=0;i<m;i++)
    {
        cin>>brr[i]; 
    }

    for(int i=0;i<n;i++)
    {
        int element = arr[i];
    
            for(int j=0;j<m;j++)
            {
                if(element==brr[j])
                {
                    brr[j]=INT16_MIN;
                }
            
            }
    }
    cout<<"Union series "<<endl;

    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i=0;i<m;i++)
    {
        int values=brr[i];
        if(values!=INT16_MIN)
        {
        ans.push_back(values);
    }}

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // lets extend the question if our final array after process have some repeatation element like if list one have 1,2,2,3 so here 2 
    // repeating 2 times so ignore 2 or any element if it occur more than one time remove it

    sort(ans.begin(),ans.end());
    cout<<"after sorting and more filtering "<<endl;
    ans.erase(unique(ans.begin(), ans.end()));
    // unique will find the elemnt which is repeated and erase will just remove it 
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}