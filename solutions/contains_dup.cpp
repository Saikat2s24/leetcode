#include<bits/stdc++.h>
using namespace std;
// LeetCode 217 - Contains Duplicate | O(n)
class Solution{public:
    bool containsDuplicate(vector<int>&n){
        unordered_set<int>s;
        for(int x:n)if(!s.insert(x).second)return true;
        return false;}};
