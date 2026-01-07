#include<bits/stdc++.h>
using namespace std;
// LeetCode 155 - Min Stack | O(1) all ops
class MinStack{
    stack<int>s,ms;
public:
    void push(int v){s.push(v);ms.push(ms.empty()?v:min(v,ms.top()));}
    void pop(){s.pop();ms.pop();}
    int top(){return s.top();}
    int getMin(){return ms.top();}};
