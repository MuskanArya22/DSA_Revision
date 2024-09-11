#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Aman");
    q.push("Muskan");
    q.push("Jaivik");

    cout<<"First Element : "<<q.front()<<endl;
    cout<<"Second Element : "<<q.back()<<endl;

    cout<<"Size before pop :"<<q.size()<<endl;

    q.pop();
    cout<<"First Element : "<<q.front()<<endl;

    cout<<"Size after pop :"<<q.size()<<endl;

}
