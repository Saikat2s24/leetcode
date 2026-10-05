// LeetCode #560 - Subarray Sum Equals K
// Approach: Prefix Sum + HashMap (O(n) time, O(n) space)
// Given an array of integers nums and an integer k,
// return the total number of subarrays whose sum equals to k.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // freq[prefix_sum] = number of times this prefix sum has occurred
        unordered_map<int, int> freq;
        freq[0] = 1; // empty prefix

        int count = 0, prefixSum = 0;
        for (int num : nums) {
            prefixSum += num;
            // If (prefixSum - k) exists, those subarrays sum to k
            if (freq.count(prefixSum - k)) {
                count += freq[prefixSum - k];
            }
            freq[prefixSum]++;
        }

        return count;
    }
};

// Time Complexity:  O(n)
// Space Complexity: O(n)

int main() {
    Solution sol;
    vector<int> nums1 = {1, 1, 1};
    cout << sol.subarraySum(nums1, 2) << endl; // Expected: 2

    vector<int> nums2 = {1, 2, 3};
    cout << sol.subarraySum(nums2, 3) << endl; // Expected: 2

    return 0;
}
