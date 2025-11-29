#include<bits/stdc++.h>
using namespace std;
// LeetCode 75 - Sort Colors | Dutch National Flag O(n)
class Solution{public:
    void sortColors(vector<int>&n){
        int lo=0,mid=0,hi=n.size()-1;
        while(mid<=hi){
            if(n[mid]==0)swap(n[lo++],n[mid++]);
            else if(n[mid]==1)mid++;
            else swap(n[mid],n[hi--]);}}};
