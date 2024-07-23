//#include<bits/stdc++.h>

#include<iostream>
#include<climits>

using namespace std;

int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        //maxi=max(maxi,num[i]) [for maximum value between two numbers]
    }

    return min; //return maxi;
}

int getMax(int arr[],int n){
    int max=INT_MIN;
    for (int i=0;i<n;i++) 
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    return max;
}

int main(){
    int n;
    cin>>n;

    int arr[10];

    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Maximum value is: "<<getMax(arr,n)<<endl;
    cout<<"Minimum value is: "<<getMin(arr,n)<<endl;


    return 0;
}