//Arrays store simillar pre-defined data types , it is contiguous memory allocation

//We can store multiple values as a single variable using array


#include<iostream>

using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    //declare
    int a[5];

    //accessing an array
    cout<<"VALUE AT 1 INDEX :"<<a[1]<<endl;
    
    //initializing an array
    int b[3]={1,2,3};

    //accessing an element
    cout<<"value at index 2: "<<b[2]<<endl;

    int c[15]={17,2};

    int n=15;
    printArray(c,15);

    int cSize=sizeof(c)/sizeof(int);
    cout<<"Size of c is: "<<cSize<<endl;
    
    //initialising all locations with 0
    int d[10]={0};

    n=10;
    printArray(d,10);

    //initialising all locations with 1[not possible with below line]
    int e[10]={1};

    n=10;
    printArray(e,10);

    int eSize=sizeof(e)/sizeof(int);
    cout<<"Size of e is: "<<eSize<<endl;

    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;

    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }



    cout<<endl<<"Everything is fine !!"<<endl<<endl;

    return 0;
}


