// 1380. Lucky Numbers in a Matrix
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

 

// Example 1:

// Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
// Output: [15]
// Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 2:

// Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
// Output: [12]
// Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 3:

// Input: matrix = [[7,8],[1,2]]
// Output: [7]
// Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    int m = mat.size();
    int n = mat[0].size();

    vector<int> ans;

    for (int i = 0; i < m; i++) {
        int minNum = mat[i][0];

        // Find the minimum in the current row
        for (int j = 1; j < n; j++) {
            minNum = min(minNum, mat[i][j]);
        }

        // Find the column containing this minimum
        int col = 0;

        for (int j = 0; j < n; j++) {
            if (mat[i][j] == minNum) {
                col = j;
                break;
            }
        }

        // Check whether it is the maximum in its column
        bool isLucky = true;

        for (int r = 0; r < m; r++) {
            if (mat[r][col] > minNum) {
                isLucky = false;
                break;
            }
        }

        if (isLucky) {
            ans.push_back(minNum);
        }
    }

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
