#include<bits/stdc++.h>
using namespace std;
// LeetCode 202 - Happy Number | Floyd cycle O(logn)
class Solution{
    int next(int n){int s=0;while(n){int d=n%10;s+=d*d;n/=10;}return s;}
public:
    bool isHappy(int n){
        int s=n,f=n;
        do{s=next(s);f=next(next(f));}while(s!=f);
        return s==1;}};
