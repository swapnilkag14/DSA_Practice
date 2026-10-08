#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    int low = 0;
    int mid = 0;
    int hight = nums.size() - 1;

    while (mid <= hight)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[hight]);
            hight--;
        }
    }

    for (int x : nums)
    {
        cout << x << " ";
    }
}   