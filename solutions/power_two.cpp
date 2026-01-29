#include<bits/stdc++.h>
using namespace std;
// LeetCode 231 - Power of Two | O(1) bit trick
class Solution{public:
    bool isPowerOfTwo(int n){return n>0&&!(n&(n-1));}};
