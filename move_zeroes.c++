#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[j++], nums[i]);
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    moveZeroes(nums);
    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
