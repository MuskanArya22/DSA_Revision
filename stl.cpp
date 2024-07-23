//STL is basically the the minimsed version giving the access to container and algorithm






/* C++ STL(STANDARD TEMPORARY LIBRARY  ) are divided into four parts--
1)Algorithm
2)Containers{
    It can be --
    --vectors
    --queue
    --sets
    --maps
}
3)Functions
4)Iterator







//PAIRS- they are the part of utility library

void explainPair(){
    pair<int,int> p={1,3};              //stores everything into variable p<data type,datatype>

    cout<<p.first<<" "<<p.second;       //p.first--1  //p.second--3

    pair<int,pair<int,int>> p={1,{3,4}};

    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};

    cout<<arr[1].second;
}







//VECTORS

void explainVector(){

    vector<int> v;           //vector is a container which is dinamic in nature in a simillar function like a array does         
                             // this line create an empty container

    v.push_back(1);          //push 1 in container---{1}
    v.emplace_back(2);       //dynamically adds 2 using pushback at the back of container after 1---{1,2}//faster than pushback

    vector<pair<int,int>>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);     //conatiner contains 5 instances of 100
                              //{100,100,100,100,100}

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);       //v2 will be simillar container but a copy of v1

    vector<int>::iterator it=v.begin();      //it points to the memory address
                                            // we use * to give the memory address

    it++;                                   //shifting it right side
    cout<<*(it)<<" ";

    it=it + 2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();      //end points to the memory location that points right after the element(where the elements end)

    vector<int>::iterator it=v.rend();     //reverse-end 

    vector<int>::iterator it=v.rbegin();


    cout<<v[0]<<" "<<v.at(0);

    cout<<v.back()<<" ";



    for(vector<int>::iterator it=v.begin(); it !=v.end();it++){
        cout<< *(it) <<" ";
    }

    for(auto it=v.begin(); it != v.end(); it++){    //automatically declares the datatype accordingly
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }



    //{10,20,12,23}
    v.erase(v.begin()+1);           //erase(starting address,ending address after element)

    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);


    //Insert function
    vector<int>v(2,100);            //{100,100}
    v.insert(v.begin(),300);        //inserts 300 right at the beginning
    v.insert(v.begin()+1,2,10);     //{300,10,10,100,100}

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());    //{50,50,300,10,10,100,100}

    //{10,20}
    cout << v.size();    //2 how many elements are given in the vector

    //{10,20}
    v.pop_back();        //{10}

    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2);         //v1->{30,40} ,v2->{10,20}

    v.clear();           //erases the entire vector

    cout<<v.empty();

}










//LIST

void explainList(){
    list<int> ls;           //list is dynamic in nature
                            //only diff b/w vector and list is that it also provide front operations also

    ls.pushback(2);         //{2}
    ls.emplace_back(4);     //{2,4}

    ls.push_front(5);       //{5,2,4}

    ls.emplace_front(); {2,4};

    //rest functions same as vector
    //begin ,end ,rbegin ,rend ,clear ,insert ,size ,swap 
}











//DEQUE

void explainDeque(){
    deque<int> dq;          //{1}
    dq.push_back(1);        //{1,2}
    dq.emplace_back(2);     //{4,1,2}
    dq.push_front(4);       //{3,4,1,2}
    dq.emplace_front(3);

    dq.pop_back();          //{3,4,1}
    dq.pop_front();         //{4,1}

    dq.back();

    dq.front();

    //rest function are same as vector
    //begin ,end ,rbegin ,rend ,clear ,insert ,size ,swap
}










//STACK
    //Follow LIFO(Last IN First OUT)

void explainStack(){
    stack<int> st;
    st.push(1);      //{1}
    st.push(2);      //{2,1}
    st.push(3);      //{3,2,1}
    st.push(4);      //{4,3,2,1}
    st.empace(5);    //{5,4,3,2,1}    //simillar to push

    cout<<st.top();  //print 5 "**st[2] is invalid **(indexing is not allowed )"
                     //stack have only 3 functions push pop and top
    st.pop();

    cout<<st.top();  //4

    cout<<st.size(); //4

    cout<<st.empty(); //false

    stack<int>st1,st2;
    st1.swap(st2);
}







//QUEUE
    //Follow FIFO(First IN First OUT)

void explainQueue(){
    queue<int> q;
    q.push(1);          //{1}
    q.push(2);          //{1,2}
    q.emplace(4);       //{1,2,4}

    q.back() +=5        //adds 5 in 4 i.e. back element (last)

    cout<< q.back();    //prints 9

    //Q is {1,2,9}
    cout<< q.front();   //prints 1

    q.pop();            //{2,9}

    cout<<q.front();    //prints 2

    //size swap empty same as stack
}







//PRIORITY QUEUE
    //element which have largest value stays at the top
    //given below is MAX HEAP

void explainPQ(){
    priority_queue<int>pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);     //{10,8,5,2}

    cout<< pq.top();    //prints 10

    pq.pop();           //{8,5,2}

    cout<<pq.top();     //prints 8

    //size swap empty function same as others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);      //{2,5,8,10}

    cout<<pq.top();      //prints 2
}







//SETS
    //set is nothing but sorted and unique container

void explainSet(){
    set<int> st;
    st.insert(1);       ////{1}
    st.emplace(2);      //{1,2}
    st.insert(2);       //{1,2}
    st.insert(4);       //{1,2,4}
    st.insert(3);       //{1,2,3,4}


    //Functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin(), end() ,rbegin() ,rend() ,size()
    //empty()  and swap() are same as those of above

    //{1,2,3,4,5}
    auto it=st.find(3);     //it->iterator

    //{1,2,3,4,5}
    auto it=st.find(6);     //if element does not is in the set then ity returns st.end

    //{1,4,5}
    st.erase(5);            //erases 5  //takes logarithmic time //log n

    int cnt=st.count(1);

    auto it=st.find(3);
    st.erase(it);            //it takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);       //after erase {1,4,5}  (first, last)

    //lower_bound() and upper_bound function() works in a same way
    //as in vector it does.

    //This is the synatx
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

}










//MULTISET
    //sorted but not not unique container

void explainMultiSet(){
     //everything is same as set
     //only stores duplicate elements also

     multiset<int>ms;
     ms.insert(1);
     ms.insert(1);
     ms.insert(1);          //{1,1,1}

     ms.erase(1);           //all 1's erased

     int cnt = ms.count(1);

     //only a single one erased
     ms.erase(ms.find(1));

     ms.erase(ms.find(1), ms.find(1)+2);

     //rest all functions same as set
}








//UNORDEREDSET

void explainUSet(){
    unordered_set<int> st;
    //upper_bound and lower_bound does not work rest all functions are same
    //does not store in any particular order
    //better complexity than set in most cases except some when colllisions happens
}







//MAPS

void explainMap(){

    map<int, int> mpp;              //map{key,value}
    
    map<int, pair<int,int>> mpp;

    map <pair <int,int>, int> mpp;


    mpp[1] =2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp[{2,3}] = 10;

    {
        {1,2}
        {2,4}
        {3,1}
    } 

    for(auto it : mpp){
        cout<< it.first <<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[2];

    auto it =mpp.find(3);
    cout<< *(it).second;

    auto it=mpp.find(3);


    //this is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase, swap , size , empty, are same as above

}








//MULTIMAP
    //duplicate key but sorted
void explainMultimap(){
    //everything same as map, only it can store multiple keys
    //only app[key] cannot be used here

}



//UNORDEREDMAP
    //unique keys but not sorted
    //most cases constant time and map in logarithmic time

void explainUnorderedMap(){
    //same as set and unordered_set difference
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    } else if (p1.second == p2.second){
        if(p1.first>p2.second)
        return true;
    }
    return false;
}


//EXTRA

void explainExtra(){

    sort(a+2, a+4);     //sort any containwe

    sort(a,a+n,greater<int>);

    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    sort(a,a+n, comp);

    int num =7;
    int cnt
}