//Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

//Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.

#include<iostream>

using namespace std;

int countdigits(int n){
    int count=0;
    int temp=n;

    while(n>0){
        int rem=n%10;
        if(rem!=0 && temp%rem==0){
            count++;
        }
        n=n/10;


    }
    return count;
    
}
int main(){
    int n;
    cin>>n;
    cout<<countdigits(n);
    return 0;
}