#include<bits/stdc++.h>
using namespace std;
// LeetCode 64 - Minimum Path Sum | O(m*n) DP
class Solution{public:
    int minPathSum(vector<vector<int>>&g){
        int m=g.size(),n=g[0].size();
        for(int i=0;i<m;i++)for(int j=0;j<n;j++){
            if(i==0&&j==0)continue;
            if(i==0)g[i][j]+=g[i][j-1];
            else if(j==0)g[i][j]+=g[i-1][j];
            else g[i][j]+=min(g[i-1][j],g[i][j-1]);}
        return g[m-1][n-1];}};
