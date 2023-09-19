// method with vector simialr to question 2 just here we use vector

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        int middle = start + (end - start) / 2;
        int m = arr[middle];
        
        if (key == m)
        {
            return middle;
        }
        else if (key < m)
        {
            end = middle - 1;
        }
        else if (key > m)
        {
            start = middle + 1;
        }
    }
    
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter size: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter key: ";
    cin >> key;
    
    int result = search(arr, n, key);
    if(result == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at index: " << result;
    }
    
    return 0;
}
