#include<vector>
#include<stack>
#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    string s = "abbaca";
    stack<char> st;


    for(int i = 0;i < s.size() ;i++){
        if(!st.empty() && s[i] == st.top() ){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }

    vector<int> ans;

    // for(char )
}