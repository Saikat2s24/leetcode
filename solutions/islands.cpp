#include<bits/stdc++.h>
using namespace std;
// LeetCode 200 - Number of Islands | DFS O(m*n)
class Solution{
    void dfs(vector<vector<char>>&g,int r,int c){
        if(r<0||r>=g.size()||c<0||c>=g[0].size()||g[r][c]=='0')return;
        g[r][c]='0';dfs(g,r+1,c);dfs(g,r-1,c);dfs(g,r,c+1);dfs(g,r,c-1);}
public:
    int numIslands(vector<vector<char>>&g){
        int cnt=0;
        for(int i=0;i<g.size();i++)for(int j=0;j<g[0].size();j++)
            if(g[i][j]=='1'){dfs(g,i,j);cnt++;}
        return cnt;}};
