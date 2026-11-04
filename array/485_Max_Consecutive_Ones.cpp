
// Code
// Testcase
// Testcase
// Test Result
// 485. Max Consecutive Ones
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2



#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> nums =  { 1,1,0, 1,1,1};
    int n = nums.size();
    int maxLen = 0;
 
    int current= 0;

    for (int i = 0; i < n; i++) {

        if (nums[i] == 1) {
            current++;
        } 
        else {
            current = 0;
        }

        maxLen = max(maxLen, current);
    }

    return maxLen;


}