#include<bits/stdc++.h>
using namespace std;
// LeetCode 1342 - Number of Steps | O(logn)
class Solution{public:
    int numberOfSteps(int n){
        int s=0;
        while(n){n%2?n--:n/=2;s++;}return s;}};
