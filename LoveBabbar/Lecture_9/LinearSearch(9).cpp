#include<iostream>

using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
         if(arr[i]==key){
             return 1;
         }
    }
    return 0;
}

int main(){


    int arr[10]={6, 4 , 7 -3 , 5 , 2 , 1 , 0 , -9 , 8};

     //whether 1 is present in it or not?

     cout<<" Enter the element to search for :"<< endl;
     int key;
     cin>>key;

    bool found = search(arr,10,key);

    if(found){
        cout<<"Element (key) is present in the array"<<endl;
    }
    else{
        cout<<"Element (key) is not present in the array"<<endl;
    }

    return 0;
}