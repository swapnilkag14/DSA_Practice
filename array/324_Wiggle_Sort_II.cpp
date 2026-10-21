// 324. Wiggle Sort II
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3]....

// You may assume the input array always has a valid answer.

 

// Example 1:

// Input: nums = [1,5,1,1,6,4]
// Output: [1,6,1,5,1,4]
// Explanation: [1,4,1,5,1,6] is also accepted.
// Example 2:

// Input: nums = [1,3,2,2,3,1]
// Output: [2,3,1,3,1,2]






#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    vector<int> nums = { 1,5,1,1,6,4};


    int n = nums.size(); 
    sort(nums.begin() , nums.end());

    int mid = (n  + 1) / 2;


    vector<int> ans(n,0);

     int left = mid - 1;  
    int right = n - 1;   

  
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans[i] = nums[left--];
        } else {
            ans[i] = nums[right--];
        }
    }
}

