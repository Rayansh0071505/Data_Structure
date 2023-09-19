// To check whether number exist in 2d array or not

#include<iostream>
using namespace std;

bool check(int arr[][10], int key, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(key == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m, arr[10][10], key;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> n >> m;
    cout << "Enter the key to search: ";
    cin >> key;
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    if(check(arr, key, n, m))
    {
        cout << "Element found!" << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}
