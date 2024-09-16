#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> reverse(vector<int> v){
    int start=0;
    int end=v.size()-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    for(int i:v){
        cout<<i<<" ";
    }

    return v;
} 

int main(){
    vector<int> v;

    v.push_back(1); 
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    v.push_back(0);
    v.push_back(2);

    vector<int> ans=reverse(v);

    /*
    int main() {
    vector<int> v;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        v.push_back(element);
    }

    vector<int> ans = reverse(v);

    
    */

    return 0;
}