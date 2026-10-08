// 20. Valid Parentheses
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

// Example 5:

// Input: s = "([)]"

// Output: false

 


#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;


int main(){
    // vector<int> = { }
    string s = "()[]{}";

    stack<char> st;

    bool ans = false;
    unordered_map<char, char> map = { 
        {')' , '('},
        {']' , '['},
        {'}' , '{'}
    };


    for(int i =0 ; i < s.size() ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }else{
            if(st.empty()){
                cout << "ans false from enpty stack" << endl;
                return false;
            }
            if(st.top() != map[s[i]]){
                cout << "ans false" << endl;
                return false;
            }
            st.pop();
        }
    }


    if(st.empty()){
        cout << "ans true fromsize";
    }else{
        cout << "ans false 44";
    }






    



}





