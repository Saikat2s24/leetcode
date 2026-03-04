#include<bits/stdc++.h>
using namespace std;
// LeetCode 344 - Reverse String | O(n) in-place
class Solution{public:
    void reverseString(vector<char>&s){
        int lo=0,hi=s.size()-1;
        while(lo<hi)swap(s[lo++],s[hi--]);}};
