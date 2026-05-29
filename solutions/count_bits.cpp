#include<bits/stdc++.h>
using namespace std;
// LeetCode 338 - Counting Bits | O(n) DP
class Solution{public:
    vector<int> countBits(int n){
        vector<int>r(n+1,0);
        for(int i=1;i<=n;i++)r[i]=r[i>>1]+(i&1);
        return r;}};
