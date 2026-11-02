
#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(){ 

        int n =3;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int num = 1;


        while(top <= bottom && left <= right){

            for(int i=left; i <= right ; i++){
                ans[top][i] = num;
                num++;
            }
            top++;


            for(int i=top; i <= bottom ; i++){
                ans[i][right] = num;
                num++;
            }
            right--;


            for(int i=right; i >= left ; i--){
                ans[bottom][i] = num;
                num++;
            }
            bottom--;


            for(int i=bottom; i >= top; i--){
                ans[i][left] = num;
                num++;
            }
            left++;
        }

        for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}
};
