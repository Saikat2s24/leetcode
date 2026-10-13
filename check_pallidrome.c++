#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}
int main() {
    string name;
    cout << "Enter the name: ";
    cin >> name;
    if (isPalindrome(name))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}