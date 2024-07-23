#include<iostream>

using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int endIndex = n - 1;
    while (start < endIndex){
        int temp = arr[start];
        arr[start] = arr[endIndex];
        arr[endIndex] = temp;
        start++;
        endIndex--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    int arr[10];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse(arr, n);
 
    return 0;
}