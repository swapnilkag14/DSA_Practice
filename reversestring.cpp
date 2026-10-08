#include <iostream> 
#include <stdio.h>
#include <string>
// #include <u>
#include <sstream>

using namespace std;

int main(){
    string s="Let's take LeetCode contest";
    stringstream ss(s);
    string word;

    string ans;
    while(ss >> word){
        // cout << word << endl;
        int size = word.size();
        int right = size -1;
        int left = 0;

        while(left < right){
            swap(word[left] , word[right]);
            left++;
            right--;
        }

        if(ans.empty()) ans.append(" ");
        ans.append(word);
    }

    cout << ans << endl;

    
    return 0;
}