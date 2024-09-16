#include<iostream>
#include<vector>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b){
    vector<int> c;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }

    while(i<a.size()){
        c.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        c.push_back(b[j]);
        j++;
    }

    for(int i:c){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> a;
    vector<int> b;

    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(7);
    a.push_back(9);

    b.push_back(2);
    b.push_back(4);
    b.push_back(6);
    b.push_back(8);
    b.push_back(10);

    vector<int> ans=merge(a,b);

    return 0;
}

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j=0, i=m;j<n;j++) {
            nums1[i]=nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};
*/