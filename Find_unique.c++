#include<iostream>
using namespace std;
int unique( int arr[],int size ){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {  
    ans = ans^arr[i];
    }
    cout << ans ;
    return ans ;

}
int main(){
    int arr[1000],n;
    cout<<"Enter the size of the array :"<<endl;
    cin >>n;
    cout<<"Enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    unique(arr,n);
    
    
}