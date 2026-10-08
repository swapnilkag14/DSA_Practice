// 905. Sort Array By Parity
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

// Return any array that satisfies this condition.

 

// Example 1:

// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]
// Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
// Example 2:

// Input: nums = [0]
// Output: [0]
 



#include <iostream>
#include <vector>

using namespace std;

int main(){           //l     r
    vector<int> nums = {3,1,2,4};
    int left =0;
    int right =nums.size()-1;

    while(left <right){
        if(nums[left] % 2 != 0 && nums[right] % 2 ==0 ){
            swap(nums[left] , nums[right]);
        }
        if(nums[left] %2 == 0){
            left++;
        }

        
        if(nums[right] %2 != 0){
            right--;
        }
    }

   for(int x : nums){
        cout << x <<endl;
    } 

    return 0;
}