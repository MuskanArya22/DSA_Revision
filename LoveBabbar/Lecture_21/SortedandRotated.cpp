#include<iostream>

using namespace std;

void sortedrotated(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            cout<<mid+1;
            break;
        }
        if(arr[start]<=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortedrotated(arr,n);
     

    return 0;

}