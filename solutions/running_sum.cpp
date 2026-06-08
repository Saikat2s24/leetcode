#include<bits/stdc++.h>
using namespace std;
// LeetCode 1480 - Running Sum | O(n) prefix sum
class Solution{public:
    vector<int> runningSum(vector<int>&n){
        for(int i=1;i<n.size();i++)n[i]+=n[i-1];
        return n;}};
