#include<iostream>

using namespace std;

void addingarrays(int arr1[],int arr2[],int n,int m){
    int i=n-1;
    int j=m-1;
    int carry=0;

    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        arr1[i]=(sum%10);
        carry=sum/10;
        i--;
        j--;
    }

    while(i>=0){
        int sum=arr1[i]+carry;
        arr1[i]=(sum%10);
        carry=sum/10;
        i--;
    }

    while(j>=0){
        int sum=arr2[j]+carry;
        arr1[j]=(sum%10);
        carry=sum/10;
        j--;
    }

    if(carry){
        cout<<carry<<" ";
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }


}

int main(){
    int n;
    cin>>n;
    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    int arr2[100];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    addingarrays(arr1,arr2,n,m);
     

    return 0;

}