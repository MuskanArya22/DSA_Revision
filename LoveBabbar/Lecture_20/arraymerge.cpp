#include<iostream>
#include<array>

using namespace std;

void merge(int arr[], int brr[],int n,int m,int crr[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            i++;
            k++;
        }
        else{
            crr[k]=brr[j];
            j++;
            k++;
        }
    }
    while(i<n){
        crr[k]=arr[i];
        i++;
        k++;
    }

    while(j<m){
        crr[k]=brr[j];
        j++;
        k++;
    }

    for(int i=0;i<n+m;i++){
        cout<<crr[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[100],brr[100],crr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    merge(arr,brr,n,m,crr);

    return 0;

}