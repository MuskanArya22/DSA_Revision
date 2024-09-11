#include<stdio.h>
#include<iostream>
#include<algorithm>


//space-constant
//time-O(n^2)        both best and worst

using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionsort(arr,n);
    cout<<"Sorted array is: "<<endl;
    printArray(arr,n);

    return 0;
}


/*
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";

}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionsort(arr,n);

    return 0;
}
*/