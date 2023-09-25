// 2. Write the code to find the Fibonacci series upto the nth term.
// fabinacci series = 1,2,3,11,14,25..........it is n+2 = n + n+1

#include<iostream>
using namespace std;

void fibonacci(int num) {
    int first = 1;
    int second = 1;

    cout << "Fibonacci sequence up to " << num << " terms:" << endl;

    for (int i = 1; i <= num; ++i) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> num;
    fibonacci(num);

    return 0;
}

