#include<bits/stdc++.h>
using namespace std;
// LeetCode 1672 - Richest Customer Wealth | O(m*n)
class Solution{public:
    int maximumWealth(vector<vector<int>>&a){
        int mx=0;
        for(auto&r:a){int s=0;for(int x:r)s+=x;mx=max(mx,s);}
        return mx;}};
