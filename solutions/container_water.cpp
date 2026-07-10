#include<bits/stdc++.h>
using namespace std;
// LeetCode 11 - Container With Most Water | O(n)
class Solution{public:
    int maxArea(vector<int>&h){
        int lo=0,hi=h.size()-1,mx=0;
        while(lo<hi){mx=max(mx,min(h[lo],h[hi])*(hi-lo));
            h[lo]<h[hi]?lo++:hi--;}
        return mx;}};
