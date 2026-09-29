#include<bits/stdc++.h>
using namespace std;
// LeetCode 682 - Baseball Game | O(n) stack
class Solution{public:
    int calPoints(vector<string>&ops){
        stack<int>st;
        for(auto&op:ops){
            if(op=="+"){int a=st.top();st.pop();int b=st.top();st.push(a);st.push(a+b);}
            else if(op=="D"){st.push(st.top()*2);}
            else if(op=="C"){st.pop();}
            else st.push(stoi(op));}
        int sum=0;while(!st.empty()){sum+=st.top();st.pop();}return sum;}};
