#include<bits/stdc++.h>
using namespace std;
void merge2array(int arr1[],int n, int arr2[],int m,int arr3[]) {
    int i = 0,j= 0,k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while (i<n)
    {
        arr3[k++]= arr1[i++];  
    }
      while (j<m)
    {
        arr3[k++]= arr2[j++];  
    }
}
void ans(int arr3[], int k ){
    for (int i = 0; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,m;
    cout<<"Enter the size of the 1st array :";
    cin>>n;
    cout<<"Enter the size of the 2nd array :";
    cin>>m;
    int arr1[1000],arr2[1000];
    cout<< "Enter the value of the 1st array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
      cout<< "Enter the value of the 2nd array :";
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    int s= n+m;
    int arr3[s];
    merge2array(arr1,n,arr2,m,arr3);
    ans(arr3,s);
return 0;
}