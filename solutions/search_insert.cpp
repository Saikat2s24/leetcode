#include<bits/stdc++.h>
using namespace std;
// LeetCode 35 - Search Insert Position | O(logn)
class Solution{public:
    int searchInsert(vector<int>&n,int t){
        int lo=0,hi=n.size()-1;
        while(lo<=hi){int m=lo+(hi-lo)/2;
            if(n[m]==t)return m;
            else if(n[m]<t)lo=m+1;else hi=m-1;}
        return lo;}};
