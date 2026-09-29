#include<bits/stdc++.h>
using namespace std;
// LeetCode 55 - Jump Game | O(n) greedy
class Solution{public:
    bool canJump(vector<int>&n){
        int reach=0;
        for(int i=0;i<n.size();i++){
            if(i>reach)return false;reach=max(reach,i+n[i]);}
        return true;}};
