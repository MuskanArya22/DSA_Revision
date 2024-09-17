#include<stdio.h>

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertionsort(arr,n);

    return 0;

}

