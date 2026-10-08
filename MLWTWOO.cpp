// 090. Maximum Length Substring With Two Occurrences
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each character.
 

// Example 1:

// Input: s = "bcbbbcba"

// Output: 4

// Explanation:

// The following substring has a length of 4 and contains at most two occurrences of each character: "bcbbbcba".
// Example 2:

// Input: s = "aaaa"

// Output: 2

// Explanation:

// The following substring has a length of 2 and contains at most two occurrences of each character: "aaaa".



#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main(){
    string s = "bcbbbcba";
    int ans=0;

    int left =0;
    unordered_map<char,int> freq;
    for(int right = 0;right < s.size() ; right++){
        freq[s[right]]++;

        while(2 < freq[s[right]]){
            
            freq[s[left]]--;
            left++;
        }
        ans = max(ans, right-left+1);

    }


    cout << ans << endl;

    
    
    return 0;
}