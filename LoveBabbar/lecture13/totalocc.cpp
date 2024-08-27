#include<iostream>
#include<algorithm>

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
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;

    }
    return ans;

}

int lasttOcc(int arr[],int n, int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;

    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int TotalOccurence=lasttOcc(arr,n,key)-firstOcc(arr,n,key)+1;
 
    cout<<"Total Occurence of Key is "<<TotalOccurence<<endl;

    return 0;
}