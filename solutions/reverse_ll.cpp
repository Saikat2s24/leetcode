#include<bits/stdc++.h>
using namespace std;
// LeetCode 206 - Reverse Linked List | O(n)
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{public:
    ListNode*reverseList(ListNode*h){
        ListNode*p=nullptr;
        while(h){auto nx=h->next;h->next=p;p=h;h=nx;}
        return p;}};
