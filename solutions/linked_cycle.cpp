#include<bits/stdc++.h>
using namespace std;
// LeetCode 141 - Linked List Cycle | Floyd O(n)
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{public:
    bool hasCycle(ListNode*h){
        auto s=h,f=h;
        while(f&&f->next){s=s->next;f=f->next->next;if(s==f)return true;}
        return false;}};
