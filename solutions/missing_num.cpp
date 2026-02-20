#include<bits/stdc++.h>
using namespace std;
// LeetCode 268 - Missing Number | O(n) math
class Solution{public:
    int missingNumber(vector<int>&n){
        int s=n.size()*(n.size()+1)/2;
        for(int x:n)s-=x;return s;}};
