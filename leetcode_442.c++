#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;

        if (nums[index] < 0) {
            ans.push_back(index + 1);
        } else {
            nums[index] = -nums[index];
        }
    }

    if (ans.empty()) {
        cout << "No duplicate elements found.";
    } else {
        cout << "Duplicate elements are: ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
    }

    return 0;
}