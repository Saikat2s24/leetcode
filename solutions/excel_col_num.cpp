#include<bits/stdc++.h>
using namespace std;
// LeetCode 171 - Excel Sheet Column Number | O(n)
class Solution{public:
    int titleToNumber(string s){
        int r=0;for(char c:s)r=r*26+(c-'A'+1);return r;}};
