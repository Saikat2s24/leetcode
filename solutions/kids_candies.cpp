#include<bits/stdc++.h>
using namespace std;
// LeetCode 1431 - Kids With Greatest Candies | O(n)
class Solution{public:
    vector<bool> kidsWithCandies(vector<int>&c,int e){
        int mx=*max_element(c.begin(),c.end());
        vector<bool>r;for(int x:c)r.push_back(x+e>=mx);return r;}};
