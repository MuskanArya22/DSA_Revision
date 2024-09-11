#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[1]="Muskan";
    m[2]="Aman";
    m[3]="Jaivik";

    m.insert({5,"Spino"});

    for(auto i:m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    cout<<"Finding 5 ->"<<m.count(5)<<endl;

    //O(log n)

    //unordered O(1)


    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}
