#include<bits/stdc++.h>
using namespace std;
// LeetCode 309 - Best Time to Buy with Cooldown | O(n) DP
class Solution{public:
    int maxProfit(vector<int>&p){
        int held=INT_MIN,sold=0,rest=0;
        for(int x:p){int ph=held,ps=sold,pr=rest;
            held=max(ph,pr-x);sold=ph+x;rest=max(pr,ps);}
        return max(sold,rest);}};
