#include<bits/stdc++.h>
using namespace std;
// LeetCode 733 - Flood Fill | DFS O(m*n)
class Solution{
    void dfs(vector<vector<int>>&img,int r,int c,int o,int col){
        if(r<0||r>=img.size()||c<0||c>=img[0].size()||img[r][c]!=o)return;
        img[r][c]=col;dfs(img,r+1,c,o,col);dfs(img,r-1,c,o,col);
        dfs(img,r,c+1,o,col);dfs(img,r,c-1,o,col);}
public:
    vector<vector<int>> floodFill(vector<vector<int>>&img,int sr,int sc,int col){
        int o=img[sr][sc];if(o!=col)dfs(img,sr,sc,o,col);return img;}};
