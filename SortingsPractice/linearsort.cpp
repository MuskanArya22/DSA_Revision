#include<iostream>

using namespace std;

void linearSort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    linearSort(arr,n);

    return 0;

}