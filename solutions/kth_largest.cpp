#include<bits/stdc++.h>
using namespace std;
// LeetCode 215 - Kth Largest Element | O(n) avg QuickSelect
class Solution{public:
    int findKthLargest(vector<int>&n,int k){
        nth_element(n.begin(),n.begin()+k-1,n.end(),greater<int>());
        return n[k-1];}};
