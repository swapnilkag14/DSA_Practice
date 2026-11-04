
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {

    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int m = mat.size();
    int n = mat[0].size();

    vector<int> ans;

    int row = 0, col = 0;
    int direction = 1;

    for(int i = 0; i < m * n; i++) {
        ans.push_back(mat[row][col]);
        if(direction == 1) {
            if(col == n - 1) {
                row++;
                direction = -1;
            }
            else if(row == 0) {
                col++;
                direction = -1;
            }
            else {
                row--;
                col++;
            }
        }
        else {
            if(row == m - 1) {
                col++;
                direction = 1;
            }
            else if(col == 0) {
                row++;
                direction = 1;
            }
            else {
                row++;
                col--;
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
