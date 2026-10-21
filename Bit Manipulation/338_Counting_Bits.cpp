// 338. Counting Bits
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

// Do not solve it with built-in functions (i.e., like __builtin_popcount in C++).
 

// Example 1:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:

// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0 
// 1 --> 1
// 2 --> 10
// 3 --> 11 
// 4 --> 100 
// 5 --> 101




#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n = 2;

    vector<int> ans(n +1  , 0);

    for(int i =0 ; i <= n ; i++){
        int num = i;
        while(num > 0){
            int pr = num & 1;
            // cout << pr << endl;
            ans[i] += num;
            num = num >> 1;
        }
    }

    return 0;
}
 