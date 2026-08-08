#include<bits/stdc++.h>
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

int main()
{
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "The square root of the number is: "
         << squarroot(n);

    return 0;
}