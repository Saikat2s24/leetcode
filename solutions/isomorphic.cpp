#include<bits/stdc++.h>
using namespace std;
// LeetCode 205 - Isomorphic Strings | O(n)
class Solution{public:
    bool isIsomorphic(string s,string t){
        unordered_map<char,char>sm,tm;
        for(int i=0;i<s.size();i++){
            if(sm.count(s[i])&&sm[s[i]]!=t[i])return false;
            if(tm.count(t[i])&&tm[t[i]]!=s[i])return false;
            sm[s[i]]=t[i];tm[t[i]]=s[i];}return true;}};
