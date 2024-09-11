#include<iostream>

using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
    /*for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            arr[j+1]=temp;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    } */
   


/*
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
*/

int main(){
     int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    insertionsort(arr,n);

    return 0;
}
   