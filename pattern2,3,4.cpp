#include<bits/stdc++.h>
using namespace std;
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t; //Number of test cases
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print4(n);
    }
} 