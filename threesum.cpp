// // #include <iostream>
// // #include <vector>
// // #include <unordered_map>
// // #include <unordered_set>
// // #include <algorithm>
// // #include <set>

// // // #include <>
// // using namespace std;
// // int main()
// // {                     // 0 1  2  3   4   5
// //     vector<int> nums = {-1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4};

// //     int i = 0;
// //     int target = 0;
// //     // vector<vector<int>> ans;
// //      set<vector<int>> st;

// //     while (i < nums.size())
// //     {
// //         int neednewtarget = target - nums[i];
// //         cout << "   nednewtarget : " << neednewtarget << endl;

// //         unordered_map<int, int> map;
// //         for (int j = i+1; j < nums.size(); j++)
// //         {
// //             int need = neednewtarget - nums[j];

// //             cout << "       Need : " << need << endl;

// //             if (map.count(need))
// //             {
// //                 cout << map[need] << ',' << j << ',' << i << endl;
// //                 // ans.push_back({nums[i],nums[j], nums[map[need]]});
// //                 vector<int> temp = {nums[i],nums[j], nums[map[need]]};

// //                 sort(temp.begin() , temp.end());
// //                 st.insert(temp);

// //             }

// //             // map[nums[ need]] = j;
// //             map[nums[j]] = j;
// //         }

// //         i++;
// //         cout << "----------------------" << i << endl;
// //     }

// // vector<vector<int>> ans(st.begin(), st.end());
// // cout << "0000000000000000000000" <<endl;

// // for(int i = 0 ; i < ans.size() ; i++){
// //     for(int j = 0; j < ans[i].size() ; j++){
// //         cout << ans[i][j] << ", " ;
// //     }
// //     cout << endl;
// // }
// //     return 0;
// // }
// //==============================================================================================

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>
// #include <set>
// using namespace std;
// int main()
// {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};

//     int i = 0;
//     int maintarget = 0;
//     // set<vector<int>> st;
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());

//     while (i < nums.size())
//     {

//         // two pointrs
//         int left = i + 1;
//         int right = nums.size() - 1;
//         int target = maintarget - nums[i];

//         while (left < right)
//         {
//             if (i < 0 && nums[i] == nums[i - 1])
//             {
//                 cout << "skip nums left" << endl;
//                 i++;
//                 continue;
//             }

//             cout << "   left : " << left << " , Right : " << right << endl;
//             int sum = nums[left] + nums[right];

//             cout << "   Sum : " << sum << endl;

//             if (sum == target)
//             {
//                 cout << left << "," << right << endl;
//                 vector<int> temp = {nums[left], nums[right], nums[i]};
//                 sort(temp.begin(), temp.end());
//                 // st.insert(temp);
//                 ans.push_back(temp);
//                 left++;
//                 right--;
//                 while (left < right && nums[left] == nums[left - 1])
//                     left++;
//                 while (left < right && nums[right] == nums[right + 1])
//                     right--;

//                 // return 0;
//             }

//             if (sum < target)
//             {
//                 left++;
//             }
//             else
//             {
//                 right--;
//             }
//         }

//         i++;
//         cout << "---------------------------------" << endl;
//     }

//     // ans.assign(st.begin() , st.end());
//     //     cout << "0000000000000000000000" <<endl;

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << ", ";
//         }
//         cout << endl;
//     }
//     return 0;
//     // return ans;
//     // return 0;
// }

// //==============================================================

// // #include <iostream>
// // #include <vector>
// // #include <unordered_map>
// // #include <unordered_set>
// // using namespace std;
// // int main()
// // {                       //0 1  2  3   4   5
// //     vector<int> nums = {2,7,11,15};
// //     // vector<int> nums = {3,2,4};

// //     // using hasmap
// //     // int i =0;
// //     // int target= 6;
// //     // unordered_map<int,int> map;
// //     // for(int i =0 ; i < nums.size() ; i++){
// //     //     int need = target - nums[i];

// //     //     if(map.count(need)){
// //     //        cout << map[need]  << ',' << i;
// //     //        return 0;
// //     //     }

// //     //     map[nums[i]] = i;
// //     // }

// //     //two pointrs
// //     int left =0;
// //     int right = nums.size() -1;
// //     int target= 9;
// //     while(left < right){
// //         int sum = nums[left] + nums[right];

// //         if(sum == target){
// //             cout << left << "," << right << endl;
// //             return 0;
// //         }

// //         if(sum < target){
// //             left++;
// //         }
// //         else{
// //             right--;
// //         }
// //     }

// //     return 0;
// //




// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.
 



    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <unordered_map>

    using namespace std;

    int main(){
        vector<vector<int>> ans;
        // vector<int> nums={-1,0,1,2,-1,-4};
        vector<int> nums= {0,0,0,0};


        // vector<int> nums={-4, -1 ,-1 , 0 , 1,2};
        int size = nums.size() - 2;
        cout << "Size" << size << endl;

        int target = 0;
        sort(nums.begin() , nums.end());
        for(int i =0; i < size; i++){
            // unordered_map<int,int> map;
            // for(int j = i+1 ; j < nums.size();j++){
                
            // }
                    // Avoid duplicate values for the first element.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int need = target - nums[i]; 
            int left =i+1;
            int right = nums.size()-1;

            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum == need){
                    cout << "index " << i  << " , " <<  left  << " , " <<  right << endl;

                    cout << "ans " << nums[i]  << " , " <<  nums[left]  << " , " <<  nums[right] << endl;

                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[right]);
                    temp.push_back( nums[left]);
                    ans.push_back(temp);

                        while(left < right && nums[left] == nums[left-1]){
                            left++;
                        }

                        
                        while(left < right && nums[right] == nums[right+1]){
                            right--;
                        }

                }
                if(sum < need){
                    left++;
                }else{
                    right--;
                }
            }
        } 
    }