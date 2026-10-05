// LeetCode #238 - Product of Array Except Self
// Approach: Prefix and Suffix product arrays (O(n) time, O(1) extra space)
// Given an integer array nums, return an array answer such that answer[i]
// is equal to the product of all the elements of nums except nums[i].

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Forward pass: result[i] = product of all elements to the left of i
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Backward pass: multiply by product of all elements to the right of i
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};

// Time Complexity:  O(n)
// Space Complexity: O(1) extra (output array doesn't count)

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.productExceptSelf(nums);
    for (int x : ans) cout << x << " ";
    cout << endl; // Expected: 24 12 8 6
    return 0;
}
