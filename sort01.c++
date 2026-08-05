//Simpliest method using C++(STL)here we use sort fuction that is inbuild when we use stl that work is to sort the elements according their power or the interger flow


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]= {0,1,0,1,0,1,1,0};
    sort(arr, arr+8);
    cout<<"The sorted array is :";
    for(int i=0; i<8; i++){
         cout<<arr[i]<<" ";
}
    return 0;
}


