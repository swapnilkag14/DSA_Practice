// 191. Number of 1 Bits
// Easy
// Topics
// premium lock icon
// Companies
// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

 

// Example 1:

// Input: n = 11

// Output: 3

// Explanation:

// The input binary string 1011 has a total of three set bits.

// Example 2:

// Input: n = 128

// Output: 1

// Explanation:

// The input binary string 10000000 has a total of one set bit.

// Example 3:

// Input: n = 2147483645

// Output: 30

// Explanation:

// The input binary string 1111111111111111111111111111101 has a total of thirty set bits.



#include<stdio.h>
#include<iostream>
using namespace std;

#include <iostream>
#include <bitset>
#include <cstdint>
using namespace std;

int main() {
    uint32_t n = 13;       // Binary: 1101 (4-bit example)
    uint32_t result = 0;

    // Repeat 4 times for this small example
    for (int i = 0; i < 4; i++) {
        cout << "\nStep " << i + 1 << endl;
        cout << "n before = " << bitset<4>(n) << endl;

        int lastBit = n & 1;
        cout << "Last bit  = " << lastBit << endl;

        result = result << 1;
        cout << "After left shift, result = "
             << bitset<4>(result) << endl;

        result = result | lastBit;
        cout << "After adding bit, result = "
             << bitset<4>(result) << endl;

        n = n >> 1;
        cout << "n after right shift = "
             << bitset<4>(n) << endl;
    }

    cout << "\nFinal reversed bits = "
         << bitset<4>(result) << endl;

    return 0;
}

/*
DRY RUN:

Input n = 1101, result = 0000

Step 1: Take 1
         result = 0001
         n      = 0110

Step 2: Take 0
         result = 0010
         n      = 0011

Step 3: Take 1
         result = 0101
         n      = 0001

Step 4: Take 1
         result = 1011
         n      = 0000

Final answer = 1011 (decimal 11)

Remember:
n & 1       -> Get the last bit
result << 1 -> Make room for the next bit
result | bit -> Add that bit
n >> 1      -> Move to the next bit

For LeetCode 190, change the loop to i < 32
and use a 32-bit input and result.
*/