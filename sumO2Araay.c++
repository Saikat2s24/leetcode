#include <bits/stdc++.h>
using namespace std;
vector<int> sumOfTwoArrays(const vector<int>& first, const vector<int>& second) {
    int i = static_cast<int>(first.size()) - 1;
    int j = static_cast<int>(second.size()) - 1;
    int carry = 0;
    vector<int> sum;
    while (i >= 0 || j >= 0 || carry > 0) {
        int digitSum = carry;
        if (i >= 0) digitSum += first[i--];
        if (j >= 0) digitSum += second[j--];
        sum.push_back(digitSum % 10);
        carry = digitSum / 10;
    }
    reverse(sum.begin(), sum.end());
    return sum;
}
int main() {
    int firstSize, secondSize;
    cout << "Enter the number of digits in the first number: ";
    cin >> firstSize;
    vector<int> first(firstSize);
    cout << "Enter the digits of the first number: ";
    for (int& digit : first) cin >> digit;
    cout << "Enter the number of digits in the second number: ";
    cin >> secondSize;
    vector<int> second(secondSize);
    cout << "Enter the digits of the second number: ";
    for (int& digit : second) cin >> digit;
    vector<int> result = sumOfTwoArrays(first, second);
    cout << "Sum: [";
    for (int i = 0; i < static_cast<int>(result.size()); i++) {
        if (i > 0) cout << ", ";
        cout << result[i];
    }
    cout << "]" << endl;
    return 0;
}
