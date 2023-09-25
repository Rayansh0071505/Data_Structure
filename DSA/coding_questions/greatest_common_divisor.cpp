// Write code of Greatest Common Divisor 

#include <iostream>
using namespace std;

int gcd(int n, int m) {
    while (m!= 0) {
        // cout<<n;
        int q = n % m;
        n = m;
        m = q;
    }
    // cout<<n;
    return n;
}

int main() {
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;
    cout << "GCD: " << gcd(n, m) << endl;
    return 0;
}
