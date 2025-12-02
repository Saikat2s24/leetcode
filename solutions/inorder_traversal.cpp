#include<bits/stdc++.h>
using namespace std;
// LeetCode 94 - Binary Tree Inorder Traversal | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{public:
    vector<int> inorderTraversal(TreeNode*r){
        vector<int>res;stack<TreeNode*>s;
        while(r||!s.empty()){
            while(r){s.push(r);r=r->left;}
            r=s.top();s.pop();res.push_back(r->val);r=r->right;}
        return res;}};
