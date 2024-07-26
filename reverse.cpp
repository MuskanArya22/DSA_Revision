//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 
#include<iostream>

using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}
//if integer is negative