#include<bits/stdc++.h>
using namespace std;
// LeetCode 122 - Best Time to Buy and Sell Stock II | O(n) greedy
class Solution{public:
    int maxProfit(vector<int>&p){
        int profit=0;
        for(int i=1;i<p.size();i++)profit+=max(0,p[i]-p[i-1]);
        return profit;}};
