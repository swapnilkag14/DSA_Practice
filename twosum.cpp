// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 


#include <iostream> 
#include <unordered_map>
#include <vector>
using namespace std;


int main() { 
    vector<int> nums = { 3,2,4};
    int target = 6;

    vector<int> ans;

    unordered_map<int,int > map;


    // for(int i = 0 ; i < nums.size();i++){

    //     int need = target - nums[i];

    //     if(map.count(need)){
    //         ans.push
    //     }

    //     map[nums[i]] = i;

         
    // }







    // sort(nums.begin() , nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while(left < right){
        int sum = nums[left] + nums[right];
        cout << "   sum : " << sum << " , left :" << left << " , right : " << right << endl;
        if(sum == target){
            break;
        }
        if(sum > target){
            right--;
        }else{
            left++;
        }
    }

    // cout << "left :  " << left << " , right : " << right << endl;


     

    
    
     return 0;
}
