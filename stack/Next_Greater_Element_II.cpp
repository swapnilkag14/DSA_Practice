#include<stack>
#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    vector<int> nums={1,2,1};

    stack<int> st;
    int n = nums.size();
    vector<int> ans(n,-1);

    for(int i=0;i < 2 * n ; i++){
        int index = i % n;
        while(!st.empty() && nums[index] >  nums[ st.top()]){
            // st.push(nums[i]);
            ans[st.top()] = nums[index];
            st.pop();
        }
        if( i < n){

            st.push(index);
        }
    }
    
    
    // while(!st.empty()){
    //     cout << st.top() <<endl;
    //     st.pop();
    // }

    for(int an : ans){
        cout << an << endl;
    }



    return 0;




}