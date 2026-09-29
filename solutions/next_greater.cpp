#include<bits/stdc++.h>
using namespace std;
// LeetCode 496 - Next Greater Element I | O(n) monotonic stack
class Solution{public:
    vector<int> nextGreaterElement(vector<int>&n1,vector<int>&n2){
        unordered_map<int,int>mp;stack<int>st;
        for(int x:n2){while(!st.empty()&&st.top()<x){mp[st.top()]=x;st.pop();}st.push(x);}
        vector<int>r;for(int x:n1)r.push_back(mp.count(x)?mp[x]:-1);return r;}};
