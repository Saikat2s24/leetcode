#include<bits/stdc++.h>
using namespace std;
int peakelement(int arr[], int n){
    int l = 0, h = n - 1;
    while (l < h){
        int mid = l + (h - l) / 2;
        if (arr[mid] < arr[mid + 1]){
            l = mid + 1;
        } else {
            h = mid;
        }
    }
    return l;
}
int main(){
    int arr[8]={1,2,3,5,6,8,4,3};
    cout<<"The peak element is in index :"<<peakelement(arr,8);
    return 0;
}