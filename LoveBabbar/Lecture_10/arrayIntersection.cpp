#include<iostream>
#include<climits>


using namespace std;

int intersection(int arr[], int n, int brr[], int m){
    int ans;
    for(int i=0;i<n;i++){
        int element=arr[i];

        for(int j=0;j<m;j++){
            if(element==brr[j]){
                cout<<element<<" ";
                brr[j]=INT_MIN;
                break;
            }
        }
    }
    return ans;
    
    

    return 0;
}

int main(){
    int n,m;
    cin>>n>>m;

    int arr[10],brr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    intersection(arr,n,brr,m);

    return 0;

}