#include<iostream>
#include<array>

using namespace std;

void movezeroes(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]==0 && arr[end]!=0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]!=0){
            start++;
        }
        else{
            end--;
        }

        /*
        if(arr[end]==0){
            end--;
        }
        else if(arr[start]!=0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else{
            start++;
        }
        */

    }
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

    movezeroes(arr,n);
     

    return 0;

}

/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};
*/