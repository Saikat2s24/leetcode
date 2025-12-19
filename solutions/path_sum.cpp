#include<bits/stdc++.h>
using namespace std;
// LeetCode 112 - Path Sum | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{public:
    bool hasPathSum(TreeNode*r,int t){
        if(!r)return false;
        if(!r->left&&!r->right)return r->val==t;
        return hasPathSum(r->left,t-r->val)||hasPathSum(r->right,t-r->val);}};
