// 581. Shortest Unsorted Continuous Subarray
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums, you need to find one continuous subarray such that if you only sort this subarray in non-decreasing order,
//  then the whole array will be sorted in non-decreasing order.

// Return the shortest such subarray and output its length.

 

// Example 1:

// Input: nums = {2, 6, 4, 8, 10, 9, 15}
// Output: 5
// Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: 0
// Example 3:

// Input: nums = [1]
// Output: 0

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();

    int l = 0;
    while (l < n - 1 && nums[l] <= nums[l + 1])
        l++;

    if (l == n - 1)
        return 0;

    int r = n - 1;
    while (r > 0 && nums[r] >= nums[r - 1])
        r--;

    int mn = nums[l];
    int mx = nums[l];

      for (int i = l; i <= r; i++) {
          mn = min(mn, nums[i]);
          mx = max(mx, nums[i]);
      }

    while (l > 0 && nums[l - 1] > mn)
        l--;

    while (r < n - 1 && nums[r + 1] < mx)
        r++;

    return r - l + 1;
}

int main() {
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};

    cout << findUnsortedSubarray(nums);

    return 0;
}