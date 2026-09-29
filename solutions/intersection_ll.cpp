#include<bits/stdc++.h>
using namespace std;
// LeetCode 160 - Intersection of Two Linked Lists | O(n+m)
struct ListNode{int val;ListNode*next;ListNode(int x):val(x),next(nullptr){}};
class Solution{public:
    ListNode*getIntersectionNode(ListNode*a,ListNode*b){
        auto p=a,q=b;
        while(p!=q){p=p?p->next:b;q=q?q->next:a;}
        return p;}};
