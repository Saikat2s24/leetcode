#include<bits/stdc++.h>
using namespace std;
// LeetCode 1470 - Shuffle the Array | O(n)
class Solution{public:
    vector<int> shuffle(vector<int>&n,int k){
        vector<int>r;
        for(int i=0;i<k;i++){r.push_back(n[i]);r.push_back(n[i+k]);}
        return r;}};
