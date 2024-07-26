#include<iostream>

using namespace std;

void binarySearch(int arr[],int n, int key){
    int low=0;
    int high=n-1;
    int mid;

    while(low<=high){
        mid=(low+high/2);
        if(arr[mid==key]){
            cout<<mid;
            break;
        }
        else if(arr[mid>key]){
            high=mid-1;
        }
        else{
            low=mid+1;
        } 
    }
}

int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    binarySearch(arr,n,key);
}