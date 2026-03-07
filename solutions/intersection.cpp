#include<bits/stdc++.h>
using namespace std;
// LeetCode 349 - Intersection of Two Arrays | O(n)
class Solution{public:
    vector<int> intersection(vector<int>&a,vector<int>&b){
        unordered_set<int>s(a.begin(),a.end());
        vector<int>r;
        for(int x:b)if(s.erase(x))r.push_back(x);
        return r;}};
