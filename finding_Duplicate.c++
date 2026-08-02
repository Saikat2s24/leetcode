#include<iostream>
#include<vector>
using namespace std;
int main (){
    int ans = 0;
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for (int i = 0; i < n; i++)
    {
        ans= ans^v[i];
    }
     for (int i = 1; i < n; i++)
    {
        ans= ans^i;
    }

    cout<<"The element is/are :"<<ans;
    return 0;
}

