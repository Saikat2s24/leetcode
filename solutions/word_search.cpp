#include<bits/stdc++.h>
using namespace std;
// LeetCode 79 - Word Search | DFS backtracking O(m*n*4^L)
class Solution{
    bool dfs(vector<vector<char>>&b,string&w,int i,int r,int c){
        if(i==w.size())return true;
        if(r<0||r>=b.size()||c<0||c>=b[0].size()||b[r][c]!=w[i])return false;
        char t=b[r][c];b[r][c]='#';
        bool f=dfs(b,w,i+1,r+1,c)||dfs(b,w,i+1,r-1,c)||dfs(b,w,i+1,r,c+1)||dfs(b,w,i+1,r,c-1);
        b[r][c]=t;return f;}
public:
    bool exist(vector<vector<char>>&b,string w){
        for(int i=0;i<b.size();i++)for(int j=0;j<b[0].size();j++)
            if(dfs(b,w,0,i,j))return true;
        return false;}};
