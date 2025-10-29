#include<bits/stdc++.h>
using namespace std;
// LeetCode 26 - Remove Duplicates from Sorted Array | O(n)
class Solution{public:
    int removeDuplicates(vector<int>&n){
        if(n.empty())return 0;
        int k=1;
        for(int i=1;i<n.size();i++)if(n[i]!=n[i-1])n[k++]=n[i];
        return k;}};
