#include<bits/stdc++.h>
using namespace std;
// LeetCode 104 - Maximum Depth of Binary Tree | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{public:
    int maxDepth(TreeNode*r){
        if(!r)return 0;
        return 1+max(maxDepth(r->left),maxDepth(r->right));}};
