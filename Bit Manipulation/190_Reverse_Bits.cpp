
// Code
// Testcase
// Testcase
// Test Result


// 190. Reverse Bits
// Easy
// Topics
// premium lock icon
// Companies
// Reverse bits of a given 32 bits signed integer.

 

// Example 1:

// Input: n = 43261596

// Output: 964176192

// Explanation:

// Integer	Binary
// 43261596	00000010100101000001111010011100
// 964176192	00111001011110000010100101000000
// Example 2:

// Input: n = 2147483644

// Output: 1073741822

// Explanation:

// Integer	Binary
// 2147483644	01111111111111111111111111111100
// 1073741822	00111111111111111111111111111110
 

#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint32_t n = 43261596;
    uint32_t ans = 0;

    for (int i = 0; i < 32; i++) {
        int bit = n & 1;

        ans = ans << 1;
        ans = ans | bit;
        n = n >> 1;
    }

    cout << ans << endl;

    return 0;
}
