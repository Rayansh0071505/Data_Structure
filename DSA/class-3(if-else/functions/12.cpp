// code to ith bit
#include <iostream>

int getIthBit(int num, int i) {
    // Shifting the i-th bit to the rightmost position
    int shifted = num >> i;
    
    // Masking the rightmost bit
    int bit = shifted & 1;
    
    return bit;
}

int main() {
    int number = 25;  // Example number: 11001 in binary
    
    int i = 3;  // Getting the value of the 3rd bit
    
    int ithBit = getIthBit(number, i);
    
    std::cout << "The " << i << "th bit of " << number << " is: " << ithBit << std::endl;
    
    return 0;
}
