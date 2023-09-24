#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}



// In the code, we're dividing the length of the string by 2 in the `for` loop condition. Let's break down why we do this:

// ```cpp
// for (int i = 0; i < length / 2; ++i)
// ```

// - **`length`** is the total length of the string.
// - **`length / 2`** gives us an integer result. This is because in C++, if both operands of the division are integers, 
// the result will also be an integer (the fractional part is discarded).

// Now, let's understand why we divide the length by 2 in this particular context:

// 1. **Comparing Characters:**
//    - We want to check if the characters at the beginning of the string match the characters at the end of the string, moving towards 
//    the middle. This is how we determine if it's a palindrome.

// 2. **Looping through Characters:**
//    - We use a `for` loop to compare characters. We start comparing characters from the beginning of the string (`i = 0`) and from the 
//     of the string (`length - i - 1`).

// 3. **Why `length / 2` in the Loop Condition:**
//    - By dividing the length by 2 and using that as the loop condition (`i < length / 2`), we ensure that we're comparing characters
//     only up to the middle of the string.
//    - Since a palindrome's characters match from both ends towards the middle, we only need to check up to the halfway point.

// For example, if the length of the string is 7, `length / 2` would be 3 (integer division). This means we would compare the first 
// character with the fourth character (from the end), the second character with the third character (from the end), and then we stop 
// because we've reached the middle.

// So, this approach helps us efficiently check for a palindrome by comparing characters up to the middle point, saving unnecessary 
// comparisons.

// I hope this clarifies why we divide the length by 2 in the loop condition! Feel free to ask if you have more questions. 

// Python code

// # function which return reverse of a string
 
// def isPalindrome(s):
//     return s == s[::-1]
 
 
// # Driver code
// s = "malayalam"
// ans = isPalindrome(s)
 
// if ans:
//     print("Yes")
// else:
//     print("No")