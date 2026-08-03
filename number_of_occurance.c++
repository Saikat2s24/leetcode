#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> mp;
    set<int> s;
    for (int x : arr) {
        mp[x]++;
    }
    for (auto x : mp) {
        if (s.count(x.second))
            return false;
        s.insert(x.second);
    }
  return true;
}

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    if (uniqueOccurrences(arr))
        cout << "true";
    else
        cout << "false";
    return 0;
}