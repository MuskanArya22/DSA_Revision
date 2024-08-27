#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int firstOcc(vector<int>& arr,int n, int key){
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

int LastOcc(vector<int>& arr,int n, int key){
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


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key)
{
    // Write your code here
    pair<int,int> p;
    p.first=firstOcc(arr,n,key);
    p.second=LastOcc(arr,n,key);

    return p;
}
