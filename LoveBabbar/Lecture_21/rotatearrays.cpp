#include<iostream>

using namespace std;


//arr[(i+k)%n]=arr[i]
void rotate(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotate(arr,n,k);
    return 0;

}