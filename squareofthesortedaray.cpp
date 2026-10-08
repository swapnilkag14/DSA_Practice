// 977. Squares of a Sorted Array
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 
#include <iostream>
#include <vector>
using namespace std;
int main(){            //   l k  r
    vector<int> nums = {-4,-1,0,16,100};
    int left =0;
    int n = nums.size();
    int right= n -1;
    int k =  n-1;
    vector<int> ans(n);
    while(left <= right){
        int lvalue = nums[left] * nums[left];
        int rvalue = nums[right] * nums[right];
        if(lvalue > rvalue){
            ans[k] =lvalue;
            left++;
        }else{
            ans[k] = rvalue;
            right--;
        } 
        k--;
    }
}