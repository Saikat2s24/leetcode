#include <bits/stdc++.h>
using namespace std;

int squarroot(int key)
{
    int l = 0;
    int h = key;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (mid * mid == key)
        {
            return mid;
        }
        else if (mid * mid < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    return h;
}

double precision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j <= n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int testSol = squarroot(n);

    cout << "Answer is: " << precision(n, 4, testSol);

    return 0;
}