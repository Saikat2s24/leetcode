#include<bits/stdc++.h>
using namespace std;
// LeetCode 383 - Ransom Note | O(n)
class Solution{public:
    bool canConstruct(string r,string m){
        int c[26]={};
        for(char x:m)c[x-'a']++;
        for(char x:r)if(--c[x-'a']<0)return false;
        return true;}};
