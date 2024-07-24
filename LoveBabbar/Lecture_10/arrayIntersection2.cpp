#include<iostream>
#include<climits>

using namespace std;

void intersection(int arr[], int n, int brr[], int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
}

int main(){
    int n,m;
    cin>>n>>m;

    int arr[10],brr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    intersection(arr,n,brr,m);

    return 0;
}