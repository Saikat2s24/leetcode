#include<bits/stdc++.h>
using namespace std;
// LeetCode 263 - Ugly Number | O(logn)
class Solution{public:
    bool isUgly(int n){
        if(n<=0)return false;
        for(int f:{2,3,5})while(n%f==0)n/=f;
        return n==1;}};
