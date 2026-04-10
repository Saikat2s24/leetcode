#include<bits/stdc++.h>
using namespace std;
// LeetCode 167 - Two Sum II | O(n) two pointer
class Solution{public:
    vector<int> twoSum(vector<int>&n,int t){
        int lo=0,hi=n.size()-1;
        while(lo<hi){
            int s=n[lo]+n[hi];
            if(s==t)return{lo+1,hi+1};
            else if(s<t)lo++;else hi--;}
        return{};}};
