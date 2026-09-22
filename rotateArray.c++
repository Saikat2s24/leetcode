#include <bits/stdc++.h>
using namespace std;
void rotate(int n, int m, int arr[]) {
    if (n <= 0) return;
    m %= n;
    int temp[1000];
    for (int i = 0; i < n; i++) {
        temp[(i + m) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
void print(int arr[], int n) {
    cout << "After rotate the elements are :" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr1[1000];
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> m;
    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    rotate(n, m, arr1);
    print(arr1, n);
    return 0;
}