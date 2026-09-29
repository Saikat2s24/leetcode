#include<bits/stdc++.h>
using namespace std;
// LeetCode 322 - Coin Change | O(amount*n) DP
class Solution{public:
    int coinChange(vector<int>&c,int amt){
        vector<int>dp(amt+1,amt+1);dp[0]=0;
        for(int i=1;i<=amt;i++)
            for(int coin:c)if(coin<=i)dp[i]=min(dp[i],dp[i-coin]+1);
        return dp[amt]>amt?-1:dp[amt];}};
