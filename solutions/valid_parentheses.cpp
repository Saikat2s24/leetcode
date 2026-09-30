// LeetCode 20 - Valid Parentheses
// Given a string with '(', ')', '{', '}', '[', ']', check if it is valid.
// Time: O(n), Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == ']' && st.top() != '[') return false;
                if (c == '}' && st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
