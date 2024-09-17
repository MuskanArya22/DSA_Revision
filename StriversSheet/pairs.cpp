#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p={1,3};              //stores everything into variable p<data type,datatype>

    cout<<p.first<<" "<<p.second;       //p.first--1  //p.second--3

    pair<int,pair<int,int>> p={1,{3,4}};

    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};

    cout<<arr[1].second;
}

std::cout<<name<<endl;
