#include<iostream>

using namespace std;


void update(int arr[],int n){
    cout<<"Inside update function"<<endl;

    arr[0]=120;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    cout<<"Going back to main function "<<endl;
}
int main(){

    int arr[3]={1,2,3};

    update(arr,3); //it assign the base adress to vooid update function and it will change the value of the array


    cout<<endl<<"Printing the main function array"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}