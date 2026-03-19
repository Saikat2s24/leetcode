#include<bits/stdc++.h>
using namespace std;
// LeetCode 414 - Third Maximum Number | O(n)
class Solution{public:
    int thirdMax(vector<int>&n){
        set<int>s(n.begin(),n.end());
        if(s.size()<3)return*s.rbegin();
        auto it=s.end();advance(it,-3);return*it;}};
