// find unique element - with help of xor
#include<iostream>
#include<vector>
using namespace std;

int find(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;  
}

int main()
{
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;

    vector <int> arr(n);
    cout<<"enter the element "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int unique = find(arr);
    cout<<unique;

}

// // explanation
// Certainly! Let's go through the process of finding a unique element in an array step by step using the XOR operation:

// Suppose we have an array `[4, 2, 4, 7, 2]` where all elements appear twice except for one element that appears only once.

// 1. **Initialize the XOR Result**: Start with an initial value of `0`. This will serve as the accumulator for the XOR operation.

//    ```plaintext
//    XOR Result = 0
//    ```

// 2. **Iterate Through the Array**: Iterate through each element in the array.

//    - For `4`:
//      - XOR Result ^ 4: `0 ^ 4 = 4`

//    - For `2`:
//      - XOR Result ^ 2: `4 ^ 2 = 6`

//    - For `4` again:
//      - XOR Result ^ 4: `6 ^ 4 = 2`

//    - For `7`:
//      - XOR Result ^ 7: `2 ^ 7 = 5`

//    - For `2` again:
//      - XOR Result ^ 2: `5 ^ 2 = 7`

// 3. **Final Result**: After XORing all the elements together, the XOR Result will contain the value of the unique element.

//    ```plaintext
//    XOR Result = 7
//    ```

// 4. **Explanation**: The pairs of `4` and `2` effectively cancel each other out due to the XOR property (`4 ^ 4 = 0` and `2 ^ 2 = 0`).
//  The only element that appears once, which is `7`, remains in the XOR Result.

// So, the unique element in the array `[4, 2, 4, 7, 2]` is `7`, and it's found by XORing all the elements together. This approach works 
// because XORing the same value twice results in `0`, and XORing any value with `0` results in the value itself.
//  This property is leveraged to identify the element that appears an odd number of times in an array.