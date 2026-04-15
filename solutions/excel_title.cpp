#include<bits/stdc++.h>
using namespace std;
// LeetCode 168 - Excel Sheet Column Title | O(logn)
class Solution{public:
    string convertToTitle(int n){
        string r;
        while(n){n--;r+=(char)('A'+n%26);n/=26;}
        reverse(r.begin(),r.end());return r;}};
