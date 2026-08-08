#include<bits/stdc++.h>
using namespace std;
int pivot_element(int arr[], int n){
    int l = 0, h = n-1;
    int mid = l + (h-l)/2;
    while (l<h)
    {
        if (arr[mid] >= arr[0] )
        {
            l = mid +1;
        }
        else
        {
            h = mid ;
        } 
        mid = l + (h-l)/2; 
    } 
    return l;
}
int main(){
int arr[8]= {3,7,8,9,1};
cout<<"The index of the pivot elemet is :"<<pivot_element(arr,8);
}