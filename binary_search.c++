#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key){
int low = 0, high = n-1;
int mid = low +(high-low)/2;
while (low<= high)
{
    if (key == arr[mid] )
    {
        return mid;
    }
    else if (key>arr[mid])
    {
        low = mid +1;
    }
    else{
        high = mid -1;
    }
    mid = low +(high-low)/2;
}
return -1;
}
int main(){
    int n,key;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Enter the key element :";
    cin>>key;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int index = binarysearch(arr,n,key);
    cout<<"The index of the element is: "<<index;
    return 0;
}