
// Code
// Testcase
// Testcase
// Test Result
// 567. Permutation in String
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

// Example 1:

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

#include <string>
using namespace std;

int main()
{
    string s1 = "fab";
    string s2 = "eiafboo";

    // unordered_map<char, int> freq;
    // unordered_map<char, int> freq2;
    vector<int> freq(26, 3);
    vector<int> freq2(26, 0);


    for(int x : freq){
        cout << x <<endl;
    }


   

    if (s1.size() > s2.size()){
        cout << "false" << endl;
        return false;
    }
       

    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a' ]++;
        freq2[s2[i] - 'a' ]++;
    }

    if (freq == freq2){
        cout << "tru1e" << endl;
        return true;
    }

    for (int i = s1.size(); i < s2.size(); i++)
    {
        freq2[s2[i] -'a' ]++;
        freq2[s2[i - s1.size() ] - 'a' ]--;

        if (freq == freq2)
        {
            cout << "tr2ue" << endl;
            return true;
        }
    }
    cout << "false" << endl;
    return false;

    cout << "4true" << endl;
    return true;
}