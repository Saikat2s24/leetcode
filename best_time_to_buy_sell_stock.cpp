/*
 * LeetCode #121 - Best Time to Buy and Sell Stock
 * Difficulty: Easy
 *
 * You are given an array prices where prices[i] is the price of a given stock
 * on the ith day. Return the maximum profit you can achieve from this transaction.
 * If you cannot achieve any profit, return 0.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test 1: " << sol.maxProfit(prices1) << endl; // 5

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test 2: " << sol.maxProfit(prices2) << endl; // 0

    vector<int> prices3 = {1, 2};
    cout << "Test 3: " << sol.maxProfit(prices3) << endl; // 1

    return 0;
}
