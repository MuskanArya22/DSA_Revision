#include<iostream>

using namespace std;

int firstOcc(int arr[],int n, int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;

    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    } 
    return ans;
}

int LastOcc(int arr[],int n, int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;

    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    } 
    return ans;
}

int main(){
    int n; 
    int key;
    int arr[100];

    cin>>n;
    cin>>key;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"First Index of Key is "<<firstOcc(arr,n,key)<<endl;
    cout<<"Second Index of Key is "<<LastOcc(arr,n,key)<<endl;


    return 0;
}