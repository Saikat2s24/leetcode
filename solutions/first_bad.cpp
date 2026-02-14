#include<bits/stdc++.h>
using namespace std;
// LeetCode 278 - First Bad Version | O(logn)
bool isBadVersion(int v);
class Solution{public:
    int firstBadVersion(int n){
        int lo=1,hi=n;
        while(lo<hi){int m=lo+(hi-lo)/2;isBadVersion(m)?hi=m:lo=m+1;}
        return lo;}};
