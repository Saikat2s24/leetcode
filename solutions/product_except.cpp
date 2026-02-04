#include<bits/stdc++.h>
using namespace std;
// LeetCode 238 - Product of Array Except Self | O(n) no division
class Solution{public:
    vector<int> productExceptSelf(vector<int>&n){
        int sz=n.size();vector<int>r(sz,1);
        int pre=1;for(int i=0;i<sz;i++){r[i]=pre;pre*=n[i];}
        int suf=1;for(int i=sz-1;i>=0;i--){r[i]*=suf;suf*=n[i];}
        return r;}};
