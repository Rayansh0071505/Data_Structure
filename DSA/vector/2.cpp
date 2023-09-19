// to initialize value with certain block and size of array
# include<iostream>
# include<vector>
using namespace std;

int main()
{
    vector<int> arr(10,-1); // saying 10 element with initialize value -1
    // 10 ki jagah n bhi krke user se input le skte like
    // vector<int> arr(n,-1);cin>>n;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
}