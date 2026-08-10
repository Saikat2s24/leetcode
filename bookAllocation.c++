#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pageSum = 0;
    int studentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if (arr[i] > mid || studentCount > m)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main()
{
    int s = 0;
    int sum = 0;
    int ans = -1;
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Enter the number of students: ";
    cin >> m;

    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <=e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1; 
        }
        else
        {
            s = mid + 1; 
        }

        mid = s + (e - s) / 2;
    }

    cout << "The ans of this is: " << ans << endl;

    return 0;
}
