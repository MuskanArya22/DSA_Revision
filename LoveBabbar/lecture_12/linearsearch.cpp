#include<iostream>

using namespace std;

void linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
}

int main(){
    int n;
    int key;
    int arr[10];

    cin>>n;
    cin>>key;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    linearsearch(arr,n,key);
}