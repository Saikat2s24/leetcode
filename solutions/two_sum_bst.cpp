#include<bits/stdc++.h>
using namespace std;
// LeetCode 653 - Two Sum IV - BST Input | O(n)
struct TreeNode{int val;TreeNode*left,*right;TreeNode(int x):val(x),left(nullptr),right(nullptr){}};
class Solution{
    void inorder(TreeNode*r,vector<int>&v){if(!r)return;inorder(r->left,v);v.push_back(r->val);inorder(r->right,v);}
public:
    bool findTarget(TreeNode*r,int k){
        vector<int>v;inorder(r,v);
        int lo=0,hi=v.size()-1;
        while(lo<hi){int s=v[lo]+v[hi];if(s==k)return true;else if(s<k)lo++;else hi--;}
        return false;}};
