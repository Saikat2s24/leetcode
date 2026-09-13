#include<bits/stdc++.h>
using namespace std;
// LeetCode 409 - Longest Palindrome | O(n)
class Solution{public:
    int longestPalindrome(string s){
        int f[128]={},odd=0;
        for(char c:s)f[(int)c]++;
        for(int x:f)if(x%2)odd++;
        return s.size()-(odd>0?odd-1:0);}};
