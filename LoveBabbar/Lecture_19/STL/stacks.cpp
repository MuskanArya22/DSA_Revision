#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("Aman");
    s.push("Muskan");
    s.push("Jaivik");

    cout<<"Top Element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;

    cout<<"Size of Stack : "<<s.size()<<endl;

    cout<<"Empty or Not : "<<s.empty()<<endl;




}