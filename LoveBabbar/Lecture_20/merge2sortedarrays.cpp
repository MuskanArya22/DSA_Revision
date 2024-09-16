#include<iostream>
using namespace std;

void merge(int arr[], int brr[],int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            cout<<arr[i]<<" ";
            i++;
        }


//1 3 5 6 
//2 4 7 8

//1 2 3 4 5 6 7 8

        else{
            cout<<brr[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }

     while (j < m) {
        cout << brr[j] << " ";
        j++;
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[100],brr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    merge(arr,brr,n,m);
    

    return 0;

}