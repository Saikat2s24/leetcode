#include<bits/stdc++.h>
using namespace std;
// LeetCode 53 - Maximum Subarray | Kadane O(n)
class Solution{public:
    int maxSubArray(vector<int>&n){
        int mx=n[0],cur=n[0];
        for(int i=1;i<n.size();i++){cur=max(n[i],cur+n[i]);mx=max(mx,cur);}
        return mx;}};
