#include<bits/stdc++.h>
using namespace std;
vector<int> mergeArray(vector<int> arr1, vector<int> arr2){
    int j = 0;
    for(int i = 0; i < arr1.size(); i++){
        if(arr1[i] == 0){
            arr1[i] = arr2[j];
            j++;
        }
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}

int main(){
    int n;
    cout<<"Enter the size of the array 1 :";
    cin >> n;
    vector<int> arr1(n);
    cout<<"Enter the elements of the array 1 :";
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int countzero = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] == 0){
            countzero++;
        }
    }
    vector<int> arr2(countzero);
    cout<<"Enter the elements of the array 2 :";
    for(int i = 0; i < countzero; i++){
        cin >> arr2[i];
    }
    vector<int> ans = mergeArray(arr1, arr2);
    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}