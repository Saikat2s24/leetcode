#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr1(1000);
    vector<int>arr2(1000);
    int n,m;
    cout<<"Enter the size of the array1 :"<< endl;
    cin>> n ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of the array2 :"<< endl;
    cin>> m ;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
         int element = arr1[i];
         for (int j = 0; j < m; j++)
         {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j]= INT_MIN;
                break;
            }    
         }     
    }
   for (int x : ans)
   {
    cout<<"the element is/ are : "<<x;
   }
   
}