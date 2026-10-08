

// A ramp in an integer array nums is a pair (i, j) for which i < j and nums[i] <= nums[j]. The width of such a ramp is j - i.

// Given an integer array nums, return the maximum width of a ramp in nums. If there is no ramp in nums, return 0.

 

// Example 1:

// Input: nums = [6,0,8,2,1,5]
// Output: 4
// Explanation: The maximum width ramp is achieved at (i, j) = (1, 5): nums[1] = 0 and nums[5] = 5.
// Example 2:
            //    0 1 2 3 4 5 6 7 8 9
// Input: nums = [9,8,1,0,1,9,4,0,4,1]
// Output: 7
// Explanation: The maximum width ramp is achieved at (i, j) = (2, 9): nums[2] = 1 and nums[9] = 1.





#include<stdio.h>
#include<vector>
#include<iostream>
#include<stack>



using namespace std;

int main(){
    vector<int> nums = { 2,2,1};
    int maxans = 0;


    // for(int i =0 ; i < nums.size(); i++){

    //     for(int j = i+1 ; j < nums.size(); j++){
    //         if(i < j && nums[i] <= nums[j]){
    //             maxans = max(maxans , j-i);
    //         }
    //     }
    // }

    int left = 0;
    int right = nums.size() -1;

    while( left < right){
        if(nums[left] <= nums[right]){
            maxans = right - left;
            break;
        }
        
        if(nums[left] > nums[right]){
            right--;
        }else{
            left++;
        }
    }

    cout << maxans << endl;

}