#include<bits/stdc++.h>
using namespace std;
// LeetCode 198 - House Robber | O(n) DP
class Solution{public:
    int rob(vector<int>&n){
        int a=0,b=0;
        for(int x:n){int c=max(b,a+x);a=b;b=c;}
        return b;}};
