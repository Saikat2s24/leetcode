#include<bits/stdc++.h>
using namespace std;
// LeetCode 414 - Third Maximum | O(n) one pass
class Solution{public:
    int thirdMax(vector<int>&n){
        long a=LLONG_MIN,b=LLONG_MIN,c=LLONG_MIN;
        for(long x:n){if(x==a||x==b||x==c)continue;
            if(x>a){c=b;b=a;a=x;}
            else if(x>b){c=b;b=x;}
            else if(x>c)c=x;}
        return c==LLONG_MIN?(int)a:(int)c;}};
