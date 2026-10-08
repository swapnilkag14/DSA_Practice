

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int size = nums.size() - 2;
    sort(nums.begin(), nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < size; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = nums.size() - 1; 
        while (left < right)
        {
            int currentSum = nums[i] + nums[left] + nums[right];

            
 
              if(abs(currentSum - target) < abs(closestSum - target)){
                closestSum = currentSum;
            }


            cout << "   closes ans" << closestSum <<endl;

            if (currentSum  < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    cout << "ans" << closestSum << endl;
    return closestSum;
}