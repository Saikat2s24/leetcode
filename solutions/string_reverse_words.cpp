#include<bits/stdc++.h>
using namespace std;
// LeetCode 557 - Reverse Words in String III | O(n)
class Solution{public:
    string reverseWords(string s){
        int i=0;
        for(int j=0;j<=s.size();j++){
            if(j==s.size()||s[j]==' '){
                reverse(s.begin()+i,s.begin()+j);i=j+1;}}
        return s;}};
