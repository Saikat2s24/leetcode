#include<bits/stdc++.h>
using namespace std;
// LeetCode 283 - Move Zeroes | O(n)
class Solution{public:
    void moveZeroes(vector<int>&n){
        int pos=0;
        for(int x:n)if(x)n[pos++]=x;
        while(pos<n.size())n[pos++]=0;}};
