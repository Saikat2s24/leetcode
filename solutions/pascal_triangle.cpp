#include<bits/stdc++.h>
using namespace std;
// LeetCode 118 - Pascal's Triangle | O(n^2)
class Solution{public:
    vector<vector<int>> generate(int n){
        vector<vector<int>>r(n);
        for(int i=0;i<n;i++){r[i].assign(i+1,1);
            for(int j=1;j<i;j++)r[i][j]=r[i-1][j-1]+r[i-1][j];}
        return r;}};
