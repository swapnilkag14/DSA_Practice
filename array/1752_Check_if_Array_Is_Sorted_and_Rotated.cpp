// 1752. Check if Array Is Sorted and Rotated
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:

// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){          //0 1 2 3 4
    vector<int> arr = {2,1,3,4};

    int flag = 0;
    int n = arr.size();
    cout << n <<endl;
    for(int i = 0 ; i < arr.size()  ; i++){
        // if()
        // cout << i << " : " << arr[i] << " > " <<  (i + 1) % n  <<  endl;
        // // if(arr[i] > arr[i+1])
        if(arr[i] > arr[(i + 1) % n]){
            flag++;
        }
        // cout << i+2 << " % " << n << "=" << ((i+2) % n) << endl;
    }

    cout << "Flg" << flag << endl;

}