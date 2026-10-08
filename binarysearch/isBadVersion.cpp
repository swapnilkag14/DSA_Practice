#include <iostream>

using namespace std;
bool isBadVersion(int n)
{
    return n == 4;
}

int main()
{
    int num = 2000105819;
 

    int left = 1;
    int right = num;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        cout << mid << endl;
        long long value   = mid * mid;
        if (value == num)
        {
            cout << "dfdf" <<  true << endl;
            return true;
        }
        else if (value < num)
        {
            left = mid + 1;
        }else
        {
            right = mid - 1;
        }
    }

    return false;
}