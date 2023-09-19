#include<iostream>
using namespace std;

bool linear_search(int arr[],int find,int size)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==find)
        {
            return true;
        }
    }  
    return false;
    
}

int main()
{
    int arr[100],find,num;
    cin>>num>>find;
    cout<<"Enter the series";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    if(linear_search(arr,find,num))
    {
        cout<<"Found";
    }
    else
    {
        cout<<"not found";
    }
}



// better way
// #include <iostream>
// using namespace std;

// void linear_search(int arr[], int find, int size) {
//     bool found = false;  // Flag variable to track if the element is found

//     for (int i = 1; i <= size; i++) {
//         if (arr[i] == find) {
//             found = true;  // Update the flag if the element is found
//             break;        // Exit the loop since the element is found
//         }
//     }

//     if (found) {
//         cout << "Found";
//     } else {
//         cout << "Not found";
//     }
// }

// int main() {
//     int arr[100], find, num;
//     cin >> num >> find;

//     for (int i = 1; i <= num; i++) {
//         cin >> arr[i];
//     }

//     linear_search(arr, find, num);

//     return 0;
// }


