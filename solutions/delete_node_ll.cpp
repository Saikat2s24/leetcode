#include<bits/stdc++.h>
using namespace std;
// LeetCode 237 - Delete Node in a Linked List | O(1)
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{public:
    void deleteNode(ListNode*node){
        node->val=node->next->val;node->next=node->next->next;}};
