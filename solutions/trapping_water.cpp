#include<bits/stdc++.h>
using namespace std;
// LeetCode 42 - Trapping Rain Water | O(n) two pointer
class Solution{public:
    int trap(vector<int>&h){
        int lo=0,hi=h.size()-1,ml=0,mr=0,w=0;
        while(lo<hi){
            if(h[lo]<h[hi]){ml=max(ml,h[lo]);w+=ml-h[lo++];}
            else{mr=max(mr,h[hi]);w+=mr-h[hi--];}}
        return w;}};
