#include<bits/stdc++.h>
using namespace std;

class stack{
    int *data;
    int nextIndex;
    int capacity;

    public:
    stack(int size){
        data = new int[size];
        nextIndex = 0;
        capacity = size;
    }
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(int element){
        if(nextIndex == capacity){
            cout<<"Stack is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return data[nextIndex-1];
    }

};

int main(){
    stack st(5);
    st.push(10);    
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);    
    st.push(60);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isEmpty()<<endl;

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.isEmpty()<<endl;


    return 0;
}
