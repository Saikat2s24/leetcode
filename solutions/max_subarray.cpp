// LeetCode 53 - Maximum Subarray (Kadane's Algorithm)
// Find the contiguous subarray with the largest sum.
// Time: O(n), Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], curr = nums[0];
        for (int i = 1; i < (int)nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            maxSum = max(maxSum, curr);
        }
        return maxSum;
    }
};
