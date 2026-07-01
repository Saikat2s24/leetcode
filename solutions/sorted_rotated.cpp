#include<bits/stdc++.h>
using namespace std;
// LeetCode 1752 - Check if Sorted and Rotated | O(n)
class Solution{public:
    bool check(vector<int>&n){
        int cnt=0,sz=n.size();
        for(int i=0;i<sz;i++)if(n[i]>n[(i+1)%sz])cnt++;
        return cnt<=1;}};
