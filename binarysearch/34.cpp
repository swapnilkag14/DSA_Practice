// 34. Find First and Last Position of Element in Sorted Array
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// 0 1 2 3 4 5
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:
// 0 1 2 3 4 5 6 7
// Input: nums = [5,3,6,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //  0 1   2 3   4  5   6
    vector<int> nums = {5, 6, 7, 7, 8, 8, 10};
    int target = 8;

    int leftans;
    int left = 0;
    int right = nums.size() - 1;

    int ans = -1;
    while (left < right)
    {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    left = 0;
    right = nums.size() - 1;

    int rightans = -1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            rightans = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }


    // ans

    cout << right << endl;

    return 0;
}