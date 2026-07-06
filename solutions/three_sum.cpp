#include<bits/stdc++.h>
using namespace std;
// LeetCode 15 - 3Sum | O(n^2) sorted + two pointer
class Solution{public:
    vector<vector<int>> threeSum(vector<int>&n){
        sort(n.begin(),n.end());vector<vector<int>>r;
        for(int i=0;i+2<n.size();i++){
            if(i>0&&n[i]==n[i-1])continue;
            int lo=i+1,hi=n.size()-1;
            while(lo<hi){int s=n[i]+n[lo]+n[hi];
                if(s==0){r.push_back({n[i],n[lo++],n[hi--]});
                    while(lo<hi&&n[lo]==n[lo-1])lo++;
                    while(lo<hi&&n[hi]==n[hi+1])hi--;}
                else if(s<0)lo++;else hi--;}}
        return r;}};
