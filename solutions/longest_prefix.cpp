#include<bits/stdc++.h>
using namespace std;
// LeetCode 14 - Longest Common Prefix | O(S)
class Solution{public:
    string longestCommonPrefix(vector<string>&s){
        if(s.empty())return"";
        string p=s[0];
        for(auto&w:s)while(w.find(p)!=0)p=p.substr(0,p.size()-1);
        return p;}};
