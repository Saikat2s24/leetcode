#include<bits/stdc++.h>
using namespace std;
// LeetCode 226 - Invert Binary Tree | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{public:
    TreeNode*invertTree(TreeNode*r){
        if(!r)return nullptr;
        swap(r->left,r->right);
        invertTree(r->left);invertTree(r->right);return r;}};
