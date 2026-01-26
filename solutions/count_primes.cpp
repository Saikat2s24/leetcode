#include<bits/stdc++.h>
using namespace std;
// LeetCode 204 - Count Primes | Sieve O(n log log n)
class Solution{public:
    int countPrimes(int n){
        if(n<2)return 0;
        vector<bool>p(n,true);p[0]=p[1]=false;
        for(int i=2;(long long)i*i<n;i++)
            if(p[i])for(int j=i*i;j<n;j+=i)p[j]=false;
        return count(p.begin(),p.end(),true);}};
