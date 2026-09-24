#include<bits/stdc++.h>
using namespace std;
// LeetCode 191 - Number of 1 Bits | O(1) Brian Kernighan
class Solution{public:
    int hammingWeight(uint32_t n){
        int cnt=0;while(n){n&=n-1;cnt++;}return cnt;}};
