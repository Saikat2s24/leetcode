#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
    cout<<arr[i]<<" ";
    }
}
void sorting(int arr[],int n){
    int i= 0,j=n-1;
    while (i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}   

int main(){
int arr[8]= {0,1,0,1,0,1,1,0};
sorting(arr,8);
print(arr,8);
}