
// 581. Shortest Unsorted Continuous Subarray
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums, you need to find one continuous subarray such that if you only sort this subarray in non-decreasing order, then the whole array will be sorted in non-decreasing order.

// Return the shortest such subarray and output its length.

 

// Example 1:

// Input: nums = [2,6,4,8,10,9,15]
// Output: 5
// Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: 0
// Example 3:

// Input: nums = [1]
// Output: 0
 



#include<stdio.h>
#include<vector>
#include<stack>
#include<iostream>


using namespace std;


int main(){

    vector<int> nums = {2,6,4,8,10,9,15};

    stack<int> st;

    int n = nums.size();
    int left = n;
    int right = -1;


    for(int i =0 ; i < n; i++){

        while(!st.empty() &&  nums[ st.top()] > nums[i]){
            left = min(left, st.top());
            st.pop();
        }

        st.push(i);

    }

    while(!st.empty())
        st.pop();


    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && nums[st.top()] < nums[i]) {

            right = max(right, st.top());

            st.pop();
        }

        st.push(i);
    }


    if(right == -1)
        return 0;

    return right - left + 1;




    cout << st.size() << endl;
}