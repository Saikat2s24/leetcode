#include<bits/stdc++.h>
using namespace std;
// LeetCode 136 - Single Number | XOR O(n) O(1)
class Solution{public:
    int singleNumber(vector<int>&n){
        int r=0;for(int x:n)r^=x;return r;}};
