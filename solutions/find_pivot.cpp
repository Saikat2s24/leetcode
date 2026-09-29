#include<bits/stdc++.h>
using namespace std;
// LeetCode 724 - Find Pivot Index | O(n) prefix sum
class Solution{public:
    int pivotIndex(vector<int>&n){
        int total=0,left=0;for(int x:n)total+=x;
        for(int i=0;i<n.size();i++){if(left==(total-left-n[i]))return i;left+=n[i];}
        return -1;}};
