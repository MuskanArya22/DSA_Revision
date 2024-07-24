#include<iostream>

using namespace std;

void pairSum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                if(arr[i]>arr[j]){
                    cout<<arr[j]<<" "<<arr[i]<<endl;
                }
                else
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }

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

    int sum;
    cin>>sum;

    pairSum(arr,n,sum);

    return 0;
}