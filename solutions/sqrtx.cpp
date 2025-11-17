#include<bits/stdc++.h>
using namespace std;
// LeetCode 69 - Sqrt(x) | O(logn) binary search
class Solution{public:
    int mySqrt(int x){
        if(x<2)return x;
        long lo=1,hi=x/2;
        while(lo<=hi){long m=lo+(hi-lo)/2;
            if(m*m==x)return m;
            else if(m*m<x)lo=m+1;else hi=m-1;}
        return hi;}};
