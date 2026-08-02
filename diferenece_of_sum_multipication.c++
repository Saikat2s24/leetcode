#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number : "<<endl;
    cin>>n;
    int remainder,sum = 0, mul = 1;
    while (n > 0)
    {
        remainder = n%10;
        n = n/10;
        sum += remainder;
        mul *=remainder;
    }
    cout<<"The difference bitween sum and mul is : "<<mul-sum;
    
}