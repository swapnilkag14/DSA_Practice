// 283. Move Zeroes
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:   f         f
                    //   s
// Input: nums = [1,3,0,0,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]



#include <iostream>
#include <vector>
using namespace std;

int main(){           //   f 
    vector<int> nums = {1,0,1};
    // vector<int> nums = {1,2};

    int slow=0;
    for(int fast = 1; fast < nums.size(); fast++){
        if(nums[fast] !=0 && nums[slow] ==0){
            swap(nums[slow ], nums[fast]);
            // slow++;
        
        }
        if(nums[slow] != 0){
            slow++;
        }


    }
    
    



    // cout
    for(int x : nums){
        cout << x <<endl;
    } 
    return 0;
}