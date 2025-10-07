#include<bits/stdc++.h>
using namespace std;
// LeetCode 7 - Reverse Integer | O(logn)
class Solution{public:
    int reverse(int x){
        long r=0;
        while(x){r=r*10+x%10;x/=10;}
        return(r>INT_MAX||r<INT_MIN)?0:r;}};
