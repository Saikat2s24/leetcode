#include<bits/stdc++.h>
using namespace std;
// LeetCode 121 - Best Time to Buy and Sell Stock | O(n)
class Solution{public:
    int maxProfit(vector<int>&p){
        int mn=INT_MAX,mx=0;
        for(int x:p){mn=min(mn,x);mx=max(mx,x-mn);}
        return mx;}};
