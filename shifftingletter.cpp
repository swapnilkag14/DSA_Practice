// 848. Shifting Letters
// Medium
// Topics
// premium lock icon
// Companies
// You are given a string s of lowercase English letters and an integer array shifts of the same length.

// Call the shift() of a letter, the next letter in the alphabet, (wrapping around so that 'z' becomes 'a').

// For example, shift('a') = 'b', shift('t') = 'u', and shift('z') = 'a'.
// Now for each shifts[i] = x, we want to shift the first i + 1 letters of s, x times.

// Return the final string after all such shifts to s are applied.

// Example 1:

// Input: s = "abc", shifts = [3,5,9]
// Output: "rpl"
// Explanation: We start with "abc".
// After shifting the first 1 letters of s by 3, we have "dbc".
// After shifting the first 2 letters of s by 5, we have "igc".
// After shifting the first 3 letters of s by 9, we have "rpl", the answer.
// Example 2:

// Input: s = "aaa", shifts = [1,2,3]
// Output: "gfd"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
     string s = "bad";
    vector<int> shifts = {10, 20, 30};

    long long totalShift = 0;

    cout << "Initial String : " << s << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout << "Outer Loop (i = " << i << ")" << endl;
        cout << "\tCurrent Shift = " << shifts[i] << endl;
        cout << "\tCurrent String = " << s << endl;

        cout << "\tStarting Right-to-Left Traversal..." << endl;

        for (int j = shifts.size() - 1; j >= 0; j--)
        {
            cout << "\t\tInner Loop (j = " << j << ")" << endl;
            cout << "\t\tCharacter Before = " << s[j] << endl;

            totalShift = (totalShift + shifts[j]) % 26;

            cout << "\t\tShift[" << j << "] = " << shifts[j] << endl;
            cout << "\t\tTotal Shift = " << totalShift << endl;

            int index = s[j] - 'a';

            cout << "\t\tAlphabet Index = " << index << endl;

            int newIndex = (index + totalShift) % 26;

            cout << "\t\tNew Index = (" << index
                 << " + " << totalShift
                 << ") % 26 = " << newIndex << endl;

            s[j] = 'a' + newIndex;

            cout << "\t\tCharacter After = " << s[j] << endl;
            cout << "\t\tString Now = " << s << endl;
            cout << "\t\t--------------------------" << endl;
        }

        cout << "\tFinished Outer Iteration" << endl;
        cout << "----------------------------------" << endl;
    }

    cout << "Final String = " << s << endl;

    return 0;
}