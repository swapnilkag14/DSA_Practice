// 744. Find Smallest Letter Greater Than Target
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

// Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

// Example 1:

// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
// Example 2:

// Input: letters = ["c","f","j"], target = "c"
// Output: "f"
// Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.
// Example 3:

// Input: letters = ["x","x","y","y"], target = "z"
// Output: "x"
// Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].

#include <iostream>
#include <vector>

using namespace std;

int main()
{
 

    // vector<char> letters = { 'c' , 'f' , 'j'};
    // char target= 'a';

    // int left = 1;
    // int right  = letters.size();

    // while(left < right){
    //     int mid   = left + (right -left) /2;
    //     if(letters[mid] == target){
    //         cout << letters[mid+1] <<endl;
    //         break;
    //     }else if(letters[mid] < target){
    //         left = mid +1 ;
    //     }else {
    //         right = mid - 1;
    //     }
    // }

    // cout << letters.size() << endl;

    // new approch
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    int left = 1;
    int right = letters.size();

    for (int i = 0; i < 26; i++)
    {
        int c = 'a';

        char v = ((c - 'a' + 1) % 26) + 'a';
        cout << v << endl;
        
        for(int i=0;i< letters.size() ; i++){
            if(v == letters[i] ){
                return v;
            }
        }
        // while (left < right)
        // {

        //     int mid = left + (right - left) / 2;
        //     if (letters[mid] == target)
        //     {
        //         cout << letters[mid + 1] << endl;
        //         break;
        //     }
        //     else if (letters[mid] < target)
        //     {
        //         left = mid + 1;
        //     }
        //     else
        //     {
        //         right = mid - 1;
        //     }
        // }
    }

    return letters[0];

    return 0;
}