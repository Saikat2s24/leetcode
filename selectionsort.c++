#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[100];
    int n;
    cout<<"Enter the number of elements present on the array :";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    cout<<"The sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
}