//Thsis thing done when the arrays are sorted in assending order 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m,i,j;
    cout<<"Enter the size of the array 1 :";
    cin>>n;
    cout<<"Enter the size of the array 2 :";
    cin>>m;

    vector<int> arr1(n);
    vector<int> arr2(m);
    vector<int> ans;
    cout<<"Enterthe elements in assending order : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enterthe elements in assending order : ";
    for ( j = 0; j < m; j++)
    {
        cin>>arr2[j];
    }
    i = 0;
    j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<"The insertion of the 2 array is/are : ";
    for (int k = 0; k < ans.size(); k++)
    {
        cout<<ans[k]<<" ";
    }
    
return 0;
}