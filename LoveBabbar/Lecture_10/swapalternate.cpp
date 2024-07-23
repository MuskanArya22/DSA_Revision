#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlt(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            /*
            INTERNAL WORKING FOR SWAP FUNCTION --->
            
                temp=arr[1];
                arr[1]=arr[0];
                arr[0]=temp;
            */
        }

    }

}

int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
  
    swapAlt(arr,n);
    printArray(arr,n);


    return 0;
}