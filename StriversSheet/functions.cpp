#include<bits/stdc++.h>
using namespace std;
//"Pass by refrence and value"
//Functions are set of code which performs something for you
//--are used to modularise code
//-- used to increase readability
//-- are used to use same code multiple times
/* 4 kinds of functions------
1)void  -- does not return anything
2) return
3)parameterised
4)non parameterised

*/

// void function
/*void printName(string name){
    cout<<"hey "<< name;
}
int main(){
    string name;
    cin>> name;
    printName(name);

    return 0;
}
*/

//return function
/*int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int res =sum(num1,num2);
    cout<<res;
    return 0;
}
*/

//in void function we use cout in place of return we dont have to use return but only cout
/*

SAME CODE WITH VOID FUNCTION



void sum(int num1,int num2){
    int num3=num1+num2;
    cout<< num3;
}

int main(){
    int num1, num2;
    cin>>num1>>num2;
    sum(num1,num2);
    return 0;
}
*/

/*
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}
*/

//pass by refrence
/*void doSomething(int arr[]){

}
int main(){
    int arr[5];
    for(int i=0;i<=4;i=i+1){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i=i+1){
        cout<<arr[i]<<"  ";
    }

    return 0;

}
*/
//passed by value
void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function"<<arr[0]<<endl;
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i=i+1){
        cin>>arr[i];
    }
    doSomething(arr,n);

    cout<<"Value inside int main"<<" "<<arr[0]<<endl;

    return 0;

}
