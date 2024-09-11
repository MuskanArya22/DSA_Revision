#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(0);
    v.push_back(2);

    cout<<"Finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;

    int a=5;
    int b=6;

    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());

    cout<<"String Reversed ->"<<abcd<<endl;


}