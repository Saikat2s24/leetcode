#include<bits/stdc++.h>
using namespace std;
// LeetCode 110 - Balanced Binary Tree | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
    int h(TreeNode*r){
        if(!r)return 0;int l=h(r->left);if(l==-1)return -1;
        int ri=h(r->right);if(ri==-1)return -1;
        if(abs(l-ri)>1)return -1;return 1+max(l,ri);}
public:bool isBalanced(TreeNode*r){return h(r)!=-1;}};
