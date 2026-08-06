#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,5,6,3};
    int n = 5;
    int peakIndex = 0;
    for (int i = 1; i < n; ++i){
        if (arr[i] > arr[peakIndex]) 
        peakIndex = i;
    }
    cout<<"the peak element is : "<<arr[peakIndex];
    return 0;
}