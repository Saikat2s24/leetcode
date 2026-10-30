/*
 * LeetCode #1 - Two Sum
 * Difficulty: Easy
 *
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.count(complement)) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }

        return {}; // no solution found
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 7, 11, 15};
    auto res1 = sol.twoSum(nums1, 9);
    cout << "Test 1: [" << res1[0] << ", " << res1[1] << "]" << endl; // [0, 1]

    vector<int> nums2 = {3, 2, 4};
    auto res2 = sol.twoSum(nums2, 6);
    cout << "Test 2: [" << res2[0] << ", " << res2[1] << "]" << endl; // [1, 2]

    vector<int> nums3 = {3, 3};
    auto res3 = sol.twoSum(nums3, 6);
    cout << "Test 3: [" << res3[0] << ", " << res3[1] << "]" << endl; // [0, 1]

    return 0;
}
