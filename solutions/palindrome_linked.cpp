#include<bits/stdc++.h>
using namespace std;
// LeetCode 234 - Palindrome Linked List | O(n) O(1)
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{public:
    bool isPalindrome(ListNode*h){
        ListNode*s=h,*f=h,*p=nullptr;
        while(f&&f->next){s=s->next;f=f->next->next;}
        while(s){auto nx=s->next;s->next=p;p=s;s=nx;}
        while(p){if(p->val!=h->val)return false;p=p->next;h=h->next;}
        return true;}};
