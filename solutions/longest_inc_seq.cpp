#include<bits/stdc++.h>
using namespace std;
// LeetCode 300 - Longest Increasing Subsequence | O(n logn) patience sort
class Solution{public:
    int lengthOfLIS(vector<int>&n){
        vector<int>tails;
        for(int x:n){
            auto it=lower_bound(tails.begin(),tails.end(),x);
            if(it==tails.end())tails.push_back(x);else*it=x;}
        return tails.size();}};
