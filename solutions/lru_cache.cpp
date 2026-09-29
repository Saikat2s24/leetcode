#include<bits/stdc++.h>
using namespace std;
// LeetCode 146 - LRU Cache | O(1) get/put using list + map
class LRUCache{
    int cap;list<pair<int,int>>cache;
    unordered_map<int,list<pair<int,int>>::iterator>mp;
public:
    LRUCache(int c):cap(c){}
    int get(int k){if(!mp.count(k))return-1;
        cache.splice(cache.begin(),cache,mp[k]);return mp[k]->second;}
    void put(int k,int v){if(mp.count(k))cache.erase(mp[k]);
        else if(cache.size()==cap){mp.erase(cache.back().first);cache.pop_back();}
        cache.push_front({k,v});mp[k]=cache.begin();}};
