#include<bits/stdc++.h>
using namespace std;
// LeetCode 228 - Summary Ranges | O(n)
class Solution{public:
    vector<string> summaryRanges(vector<int>&n){
        vector<string>r;int i=0,sz=n.size();
        while(i<sz){int j=i;
            while(j+1<sz&&n[j+1]==n[j]+1)j++;
            r.push_back(i==j?to_string(n[i]):to_string(n[i])+"->"+to_string(n[j]));
            i=j+1;}return r;}};
