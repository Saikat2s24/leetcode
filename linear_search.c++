#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array :";
    for(int i = 0; i<n;i++){
      cin>> array[i];
    }
    int key;
    cout<<"Eneter the number you search for :";
    cin>>key;
    for(int i = 0; i<n;i++){
      if(key == array[i]){
        cout<<"The element is in the index(indexing is start from 0) :"<<i;
      }
    }
    
}