#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int key){
    int ans;
    int l = 0,h=n-1;
    int mid = l+(h-l)/2;
    while (l<=h)
    {
        if ( arr[mid]== key)
        {
           ans = mid;
           h = mid-1;
        }
        else if (arr[mid]<key)
        {
            l = mid+1;
        }
        else
        {
            h = mid -1;
        } 
        mid =l+(h-l)/2;
    }
  return ans;  
}
int lastocc(int arr[],int n,int key){
    int ans;
    int l = 0,h=n-1;
    int mid = l+(h-l)/2;
    while (l<=h)
    {
        if ( arr[mid]== key)
        {
           ans = mid;
           l = mid+1;
        }
        else if (arr[mid]<key)
        {
            l = mid+1;
        }
        else
        {
            h = mid -1;
        } 
        mid =l+(h-l)/2;
    }
  return ans;  
}
int main(){
    int a[8]={1,2,3,3,3,4,5,6,};
    cout<<"The first index of the key value 3 is : "<<firstocc(a,8,3);
    cout<<endl<<"The last index of the key value 3 is : "<<lastocc(a,8,3);
}