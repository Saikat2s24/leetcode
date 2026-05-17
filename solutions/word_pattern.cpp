#include<bits/stdc++.h>
using namespace std;
// LeetCode 290 - Word Pattern | O(n)
class Solution{public:
    bool wordPattern(string p,string s){
        unordered_map<char,string>cm;unordered_map<string,char>sm;
        istringstream ss(s);string w;int i=0;
        while(ss>>w){
            if(i>=p.size())return false;char c=p[i++];
            if(cm.count(c)&&cm[c]!=w)return false;
            if(sm.count(w)&&sm[w]!=c)return false;
            cm[c]=w;sm[w]=c;}
        return i==p.size();}};
