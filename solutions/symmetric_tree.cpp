#include<bits/stdc++.h>
using namespace std;
// LeetCode 101 - Symmetric Tree | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
    bool mirror(TreeNode*l,TreeNode*r){
        if(!l&&!r)return true;if(!l||!r)return false;
        return l->val==r->val&&mirror(l->left,r->right)&&mirror(l->right,r->left);}
public:bool isSymmetric(TreeNode*r){return mirror(r,r);}};
