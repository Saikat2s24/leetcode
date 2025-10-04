#include<bits/stdc++.h>
using namespace std;
// LeetCode 9 - Palindrome Number | O(logn)
class Solution{public:
    bool isPalindrome(int x){
        if(x<0)return false;
        long r=0,o=x;
        while(x){r=r*10+x%10;x/=10;}
        return r==o;}};
