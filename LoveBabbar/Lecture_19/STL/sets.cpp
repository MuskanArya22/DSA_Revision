#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(2);

    for(int i:s){
        cout<<i<<endl;
    }


set<int>::iterator it=s.begin();
it++;

    s.erase(it);
    for(int i:s){
        cout<<i<<endl;
    }

    cout<<endl;

    cout<<"5 present or not"<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(5);

    for(auto it=itr;it!=s.end();it++){

        cout<<*it<<endl;


    }cout<<endl;

}