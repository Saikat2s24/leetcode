#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(1000000);
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Enter the elements of the array";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    vector<vector<int>>ans;
    cout<<"Enter the sum of the element :";
    cin>>key;
    for(int i= 0; i<n;i++){
        for(int j = i+1;j<n;j++){
            if((arr[i]+ arr[j])== key){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout<<"The elements are :";
    if(ans.empty()){
        cout<<"[]"<<"\n";
    } else {
        cout<<"[";
        for(size_t i=0;i<ans.size();++i){
            cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]";
            if(i+1<ans.size()) cout<<",";
        }
        cout<<"]"<<"\n";
    }
}
