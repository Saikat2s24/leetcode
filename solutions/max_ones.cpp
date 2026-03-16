#include<bits/stdc++.h>
using namespace std;
// LeetCode 485 - Max Consecutive Ones | O(n)
class Solution{public:
    int findMaxConsecutiveOnes(vector<int>&n){
        int cnt=0,mx=0;
        for(int x:n){cnt=(x?cnt+1:0);mx=max(mx,cnt);}
        return mx;}};
