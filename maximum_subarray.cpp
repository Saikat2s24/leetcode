/*
 * LeetCode #53 - Maximum Subarray
 * Difficulty: Medium
 *
 * Given an integer array nums, find the subarray with the largest sum,
 * and return its sum. (Kadane's Algorithm)
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // Either extend the current subarray or start fresh
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Test 1: " << sol.maxSubArray(nums1) << endl; // 6

    vector<int> nums2 = {1};
    cout << "Test 2: " << sol.maxSubArray(nums2) << endl; // 1

    vector<int> nums3 = {5, 4, -1, 7, 8};
    cout << "Test 3: " << sol.maxSubArray(nums3) << endl; // 23

    vector<int> nums4 = {-1, -2, -3, -4};
    cout << "Test 4: " << sol.maxSubArray(nums4) << endl; // -1

    return 0;
}
