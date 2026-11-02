#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;


int main(){
    vector<vector<int>> img = { {1,1,1},{1,0,1},{1,1,1}};
        int m = img.size();
        int n = img[0].size();

        vector<vector<int>> ans(m, vector<int>(n, 0));


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                int count = 0;
                for (int r = i - 1; r <= i + 1; r++) {
                    for (int c = j - 1; c <= j + 1; c++) {

                        if (r >= 0 && r < m &&
                            c >= 0 && c < n) {

                            sum += img[r][c];
                            count++;
                        }
                    }
                }

                ans[i][j] = sum / count;
            }
        }

        

}