#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    // 0123456
    string s = "abcdefg";
    int k = 2 ;

    cout << "==============================" << endl;
    cout << "Initial String : " << s << endl;
    cout << "String Size    : " << s.size() << endl;
    cout << "k              : " << k << endl;
    cout << "==============================" << endl;

    int i = 0;

    while (i < s.size()) {

        cout << "\n[Outer While]" << endl;
        cout << "\ti = " << i << endl;

        int left = i;
        int right = min(left + k - 1, (int)s.size() - 1);

        cout << "\tleft  = " << left << endl;
        cout << "\tright = min(" << left << " + " << k << " - 1, "
             << s.size() - 1 << ") = " << right << endl;

        cout << "\tCurrent String : " << s << endl;

        while (left < right) {

            cout << "\n\t[Inner While]" << endl;
            cout << "\t\tleft  = " << left << endl;
            cout << "\t\tright = " << right << endl;

            cout << "\t\tSwapping '" << s[left]
                 << "' <--> '" << s[right] << "'" << endl;

            swap(s[left], s[right]);

            cout << "\t\tAfter Swap : " << s << endl;

            left++;
            right--;

            cout << "\t\tleft++  -> " << left << endl;
            cout << "\t\tright-- -> " << right << endl;
        }

        cout << "\n\tInner loop finished." << endl;
        cout << "\tString after block : " << s << endl;

        i = i + (2 * k);

        cout << "\ti = i + 2*k = " << i << endl;
    }

    cout << "\n==============================" << endl;
    cout << "Final String : " << s << endl;
    cout << "==============================" << endl;

    return 0;
}