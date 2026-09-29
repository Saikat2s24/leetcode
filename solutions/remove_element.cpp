#include<bits/stdc++.h>
using namespace std;
// LeetCode 27 - Remove Element | O(n) two pointer
class Solution{public:
    int removeElement(vector<int>&n,int v){
        int k=0;for(int x:n)if(x!=v)n[k++]=x;return k;}};
