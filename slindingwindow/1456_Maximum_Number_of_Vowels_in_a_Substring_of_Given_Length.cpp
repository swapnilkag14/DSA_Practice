// 1456. Maximum Number of Vowels in a Substring of Given Length
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

// Example 1:

// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains 3 vowel letters.
// Example 2:

// Input: s = "aeiou", k = 2
// Output: 2
// Explanation: Any substring of length 2 contains 2 vowels.
// Example 3:

// Input: s = "leetcode", k = 3
// Output: 2
// Explanation: "lee", "eet" and "ode" contain 2 vowels.
 

#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

bool isVowle(char c){
    if(c == 'a' ||c == 'i' || c == 'o' || c=='e' || c == 'u'){
         return true;
        }
        return false;
}
int main(){ 
    string s = "abciiidef";
    int k =3;
    int maxans =0;
    int ans = 0;
    for(int i =0; i< k; i++ ){
        if(isVowle(s[i])){
            maxans++;
        }
    }

     ans = maxans;
    // int ans = -
    for(int i = k ; i < s.size(); i ++){
        // if(s[i])
        // s[i-k]
        if(isVowle(s[i-k])){
            ans--;
        }
        if(isVowle(s[i])){
            ans++;
        }

        maxans = max(maxans ,ans);


    }

    cout << maxans << endl;

}
