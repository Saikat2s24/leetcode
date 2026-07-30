#include<bits/stdc++.h>
using namespace std;
// LeetCode 289 - Game of Life | O(m*n) in-place
class Solution{public:
    void gameOfLife(vector<vector<int>>&b){
        int m=b.size(),n=b[0].size();
        auto live=[&](int r,int c){
            int cnt=0;
            for(int dr=-1;dr<=1;dr++)for(int dc=-1;dc<=1;dc++){
                if(!dr&&!dc)continue;int nr=r+dr,nc=c+dc;
                if(nr>=0&&nr<m&&nc>=0&&nc<n&&abs(b[nr][nc])==1)cnt++;}
            return cnt;};
        for(int i=0;i<m;i++)for(int j=0;j<n;j++){
            int l=live(i,j);
            if(b[i][j]&&(l<2||l>3))b[i][j]=-1;
            else if(!b[i][j]&&l==3)b[i][j]=2;}
        for(int i=0;i<m;i++)for(int j=0;j<n;j++)b[i][j]=b[i][j]>0?1:0;}};
