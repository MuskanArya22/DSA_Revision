#include<iostream>

using namespace std;

int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int n){
    int min=arr[0];
    for (int i=0;i<n;i++) 
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    return min;
}

int main(){
    int n;
    cin>>n;

    int arr[10];

    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Max: "<<getMax(arr,n)<<endl;
    cout<<"Min: "<<getMin(arr,n)<<endl;


    return 0;
}