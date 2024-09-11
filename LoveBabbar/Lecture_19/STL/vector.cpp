#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;

    vector<int> a(5,1);
    cout<<"print a: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    


    vector<int> last(a);
    cout<<"print last: "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Element at index 2: "<<v.at(2)<<endl;

    cout<<"First Element: "<<v.front()<<endl;
    cout<<"last Element: "<<v.back()<<endl;

    cout<<"before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size before clearing: "<<v.size()<<endl;

    v.clear();

    cout<<"size after clearing: "<<v.size()<<endl;
}