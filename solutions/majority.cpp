#include<bits/stdc++.h>
using namespace std;
// LeetCode 169 - Majority Element | Boyer-Moore O(n) O(1)
class Solution{public:
    int majorityElement(vector<int>&n){
        int cnt=0,c=0;
        for(int x:n){if(!cnt)c=x;cnt+=(x==c)?1:-1;}
        return c;}};
