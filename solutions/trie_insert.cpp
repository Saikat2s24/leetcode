#include<bits/stdc++.h>
using namespace std;
// LeetCode 208 - Implement Trie | O(m) insert/search
struct TrieNode{TrieNode*ch[26];bool end;TrieNode():end(false){fill(ch,ch+26,nullptr);}};
class Trie{TrieNode*root;
public:
    Trie():root(new TrieNode()){}
    void insert(string w){auto n=root;for(char c:w){int i=c-'a';if(!n->ch[i])n->ch[i]=new TrieNode();n=n->ch[i];}n->end=true;}
    bool search(string w){auto n=root;for(char c:w){int i=c-'a';if(!n->ch[i])return false;n=n->ch[i];}return n->end;}
    bool startsWith(string p){auto n=root;for(char c:p){int i=c-'a';if(!n->ch[i])return false;n=n->ch[i];}return true;}};
