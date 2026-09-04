#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>arr,int n, int paiterNO,int mid){
    int painters = 0;
    int totalWall = 0;
    for (int i = 0; i < n; i++)
    {
     if (totalWall +arr[i] <= mid)
     {
        totalWall += arr[i];
     }
     else{
        painters++;
        if (arr[i] > mid || painters > paiterNO)
        {
            return false;
            totalWall = arr[i];
        }
        
     }
        
    }
  return true;  
}
int main(){
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
    cout << "Enter the number of painters: ";
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