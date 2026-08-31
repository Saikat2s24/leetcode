#include<bits/stdc++.h>
using namespace std;
// LeetCode 572 - Subtree of Another Tree | O(m*n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
    bool same(TreeNode*a,TreeNode*b){
        if(!a&&!b)return true;if(!a||!b)return false;
        return a->val==b->val&&same(a->left,b->left)&&same(a->right,b->right);}
public:
    bool isSubtree(TreeNode*r,TreeNode*s){
        if(!r)return false;
        return same(r,s)||isSubtree(r->left,s)||isSubtree(r->right,s);}};
