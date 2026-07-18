#include<bits/stdc++.h>
using namespace std;
// LeetCode 3 - Longest Substring Without Repeating | O(n) sliding window
class Solution{public:
    int lengthOfLongestSubstring(string s){
        unordered_map<char,int>last;int mx=0,st=0;
        for(int i=0;i<s.size();i++){
            if(last.count(s[i])&&last[s[i]]>=st)st=last[s[i]]+1;
            last[s[i]]=i;mx=max(mx,i-st+1);}
        return mx;}};
