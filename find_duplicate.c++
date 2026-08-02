#include <iostream>
#include <vector>
using namespace std;
int duplicatevalue(vector<int>&arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans^arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans^i;
    }
    return ans;
    
}
int main(){
      vector<int> arr = {1, 2, 3, 4, 2};

    cout << "Duplicate element is: " << duplicatevalue(arr);

    return 0;
}