#include <bits/stdc++.h>
using namespace std;

bool sortedRotated(vector<int> num) {
    int count = 0;
    int n = num.size();
    if (n <= 1) return true;
    for (int i = 1; i < n; i++) {
        if (num[i - 1] > num[i]) {
            count++;
        }
    }
    if (num[n - 1] > num[0]) {
        count++;
    }
    return count <= 1;
}

int main() {
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    vector<int> num(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout <<"The array is sorted and rotated?"<<endl<< sortedRotated(num) << endl;
    return 0;
}