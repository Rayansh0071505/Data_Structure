// sort 0 1 2
#include<iostream>
#include<vector>
using namespace std;

void arrange(vector<int>arr,int n)
{
    int s=0;
    int end=n-1;
    for(int i=0;i<=end;i++)
    {
    
        if(arr[i]==0)
        {
            swap(arr[i],arr[s]);
            s++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[end]);
            end--;
            i--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Size ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Series - ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the sorted list ";
    arrange(arr,n);
    return 0;
}

// understanding of question
/*
-> start=0 as it will read only 0 and if it read 0 it will incrfement its value
-> end=n-1 it will read 2 as if it read 2 it will decrease its value as well i will also decrease by -1

input - 2 1 1 0 1 2
for i=0
2 is there so end =n-1 i.e n=5 swap value with 5th element and end will be now 4 and i will be 0 again as i also i--
it will be not -1  as in for loop there i++ also so it will cancel out with -- and it will same as 0

for i=0 (again)  part-2
2 is there
end=4 , swap 2 with 1 and end will be 3 now and i again 0
1 1 1 0 2 2

for i=0 again 
1 is there as no condition for 1 so skip it
1 1 1 0 2 2

for i=1 
1 is there 
1 1 1 0 2 2

for i=2
1 is there
1 1 1 0 2 2

for i=3
0 is there so
start=0 swap with start pos and start will be ++ and start=1
0 1 1 1 2 2

as i <=end
here i=3,end=3 so loop over

*/