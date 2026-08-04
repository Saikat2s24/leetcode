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
            for(int k = j+1;k<n;k++){
            if((arr[i]+ arr[j]+arr[k])== key){
                vector<int>temp;
                temp.push_back(min({arr[i],arr[j],arr[k]}));
                vector<int>vals = {arr[i],arr[j],arr[k]};
                sort(vals.begin(), vals.end());
                temp.push_back(vals[1]);
                temp.push_back(max({arr[i],arr[j],arr[k]}));
                ans.push_back(temp);
            }
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
            cout<<"["<<ans[i][0]<<","<<ans[i][1]<<","<<ans[i][2]<<"]";
            if(i+1<ans.size()) cout<<",";
        }
        cout<<"]"<<"\n";
    }
}