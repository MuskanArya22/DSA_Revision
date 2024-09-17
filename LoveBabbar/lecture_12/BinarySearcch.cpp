#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+(low+high)/2;

    while(low<=high){
        mid=low+(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
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

    cout<<"Index of Key is "<<binarySearch(arr,n,key);

    return 0;
}