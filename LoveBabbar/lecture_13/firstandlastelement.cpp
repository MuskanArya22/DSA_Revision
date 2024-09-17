#include<iostream>

using namespace std;

int firstelement(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+high/2;

    while(low<=high){
        mid=low+high/2;
        if(arr[mid]==key){
            if(mid==0){
                return mid; 
            }
            else if(arr[mid-1]!=key){
                return mid;
            }
            else{
                high=mid-1;
            }
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

int lastelement(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+high/2;

    while(low<=high){
        mid=low+high/2;
        if(arr[mid]==key){
            if(mid==n-1){
                return mid;
            }
            else if(arr[mid+1]!=key){
                return mid;
            }
            else{
                low=mid+1;
            }
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
    int arr[100];

    cin>>n;
    cin>>key;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"First Occurence of Key is "<<firstelement(arr,n,key)<<endl;
    cout<<"Last Occurence of Key is "<<lastelement(arr,n,key);

    return 0;
}