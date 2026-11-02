// 54. Spiral Matrix
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<vector<int>> matrix = { {1,2,3}, {4,5,6}, {7,8,9}};

    vector<int> ans;

    int row = matrix.size();
    int cols = matrix[0].size();


    int top = 0;
    int bottom = row -1;
    int left = 0; 
    int right  = cols- 1;



    while(top <= bottom && left <= right){
        for(int i = left ; i<= right ; i++  ){
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i = top; i <= bottom ; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;


        for( int i= right; i >= left; i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom++;


        for(int i= bottom; i >= top; i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }


}