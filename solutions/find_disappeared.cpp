#include<bits/stdc++.h>
using namespace std;
// LeetCode 448 - Find All Numbers Disappeared | O(n) in-place
class Solution{public:
    vector<int> findDisappearedNumbers(vector<int>&n){
        for(int x:n){int i=abs(x)-1;if(n[i]>0)n[i]=-n[i];}
        vector<int>r;
        for(int i=0;i<n.size();i++)if(n[i]>0)r.push_back(i+1);
        return r;}};
