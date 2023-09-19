#include<iostream>
#include<vector>
using namespace std;
;
int find(int n)
{
    int start = 0;
    int end = n;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int sqr = mid * mid;
        
        if (sqr == n)
        {
            return mid;
        }
        else if (sqr > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int result = find(n);
    cout << "ans is " << result;

    return 0;
}
