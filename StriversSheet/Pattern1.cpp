/*
--Patterns have to work on Loops
--They will have nested loops
--
****
****
****
****
--
4 RULES OF SOLVING PATTERN--
1)For the outer loops->Count the number of lines
2)For the inner loops->Focus on the columns and connect them somehow to the rows
3)Whatever you are pritting print them inside the inner for loops
4)Observe symmetry(optional one)
*/


#include<iostream>
#include<vector>
#include<algorithm>
// Add any other specific header files you need
using namespace std;

int main(){
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


/*PATTERN USING FUNCTION




#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main{
    int t;
    cin>>t; //Number of test cases
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }
} 






#include<bits/stdc++.h>

using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print(n);
    }
}
*/