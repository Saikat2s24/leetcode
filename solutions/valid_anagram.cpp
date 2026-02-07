#include<bits/stdc++.h>
using namespace std;
// LeetCode 242 - Valid Anagram | O(n)
class Solution{public:
    bool isAnagram(string s,string t){
        if(s.size()!=t.size())return false;
        int c[26]={};
        for(char x:s)c[x-'a']++;
        for(char x:t)if(--c[x-'a']<0)return false;
        return true;}};
