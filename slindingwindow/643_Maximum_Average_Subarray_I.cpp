// 643. Maximum Average Subarray I
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 

// Example 1:

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000
// Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
// Example 2:

// Input: nums = [5], k = 1
// Output: 5.00000
 


#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> nums = { 1,12,-5,-6,50,3};
    int k =4; 

    double maxAvg = 0;

    int total = 0;
    for(int i =0 ; i< k ; i++){
        total += nums[i];
    }

    maxAvg = total / k;


    for(int i = k ; i <nums.size() ; i++){
        total -= nums[i-k];
        total += nums[i];

        double avg = total / k;
        maxAvg = max(maxAvg , avg);
    }

    cout << maxAvg << endl;



}
