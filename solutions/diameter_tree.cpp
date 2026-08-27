#include<bits/stdc++.h>
using namespace std;
// LeetCode 543 - Diameter of Binary Tree | O(n) DFS
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{int res=0;
    int dfs(TreeNode*r){
        if(!r)return 0;int l=dfs(r->left),ri=dfs(r->right);
        res=max(res,l+ri);return 1+max(l,ri);}
public:int diameterOfBinaryTree(TreeNode*r){dfs(r);return res;}};
