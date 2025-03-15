#include<bits/stdc++.h>
using namespace std;


void print(vector<int> v1){
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;

}
void print(deque<int> d){
    for(auto i:d)
        cout<<i<<" "<<endl;
}

void print(list<int> d){
    for(auto i:d)
        cout<<i<<" "<<endl;
}



    

void printWithIterator(vector<int> v){
    vector<int>::iterator it = v.begin();   //takes or points to the memory address directly using iterator


    for(vector<int>::iterator at = v.begin();at<v.end();at++)
        cout<<*(at)<<endl;
    
    // foreach loop
    for(auto i:v)
        cout<<i<<endl;
    // deleting or erasing
    v.erase(v.begin()+2,v.begin()+3);
    cout<<"After erasing : "<<endl;
    for(auto i:v)
        cout<<i<<endl;
    
    // inserting elements
    cout<<"After insertion : "<<endl;
    v.insert(v.begin()+1,3,10);
    for(auto i:v)
        cout<<i<<endl;



} 


// writing comparator for my way sorting
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    else return false;
}


int main(){

    // pair

    // pair<int,int> per  = {1,3};
    // pair<int,int> p[] = {{1,3},{2,4},{5,7}};
    // cout<<per.first<<" "<<per.second<<endl;
    // cout<<p[0].first<<" "<<p[1].first<<endl;

    // pair<int,pair<int,int>> pr = {5,{2,3}};
    // cout<<pr.second.first;

    // vectors - dynamic can grow and shrink

    vector<int> v1 = {9,2,3,4};
    cout<<v1[0]<<endl;
    v1.push_back(20);
    print(v1);
    v1.push_back(30);
    print(v1);
    v1.pop_back();
    print(v1);
    cout<<"sorted : "<<endl;
    // original vector is modified
    sort(v1.begin(),v1.end());
    print(v1);

    vector<int> v2 = vector(5,100); 
    //or 
    vector<int> v3(5,100);
    cout<<"v2 : "<<endl;
    print(v2);
    cout<<"v3 : "<<endl;
    print(v3);

    // copying one vector into another
    vector<int> v5(v1);
    printWithIterator(v5);

    
    deque<int> d ;
    cout<<"Deque : "<<endl;
    d.push_back(10);
    d.push_back(20);
    print(d);
    d.pop_front();
    cout<<"After popping : "<<endl;
    print(d);
    // d.pop_back();
    // print(d);

    list<int> ls;
    cout<<"List intial : "<<endl;
    print(ls);
    ls.emplace_back(10);
    ls.emplace_back(20);
    ls.push_front(5);
    print(ls);

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    

    // max heap

    cout<<"max heap priority queue : "<<endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(3);
    cout<<pq.top()<<endl;

    // min heap 
    cout<<"min heap priority queue : "<<endl;
    priority_queue<int , vector<int> , greater<int>> min;
    min.push(20);
    min.push(1);
    min.push(0);
    
    cout<<min.top()<<endl;

    // ordered set -> sorted and distinct elements
    cout<<"ordered set : "<<endl;
    set<int> s;
    s.emplace(1);
    s.emplace(1);
    s.emplace(3);
    for(auto i:s)
    cout<<i<<" "<<endl;
    cout<<"find nos in set : "<<endl;
    auto it1 = s.find(10);
    auto it2 =  s.find(1);
    auto it3 = s.find(3);
    cout<<*(it1)<<" "<<*(it2)<<" "<<*(it3)<<endl;
   
    
    // mutli set stores multiple in ordered i.e duplicates
    cout<<"Multi set : "<<endl;
    multiset<int> m;
    m.emplace(1);
    m.emplace(1);
    m.emplace(20);
    m.emplace(40);
    for(auto i:m)
        cout<<i<<endl;

    
    // unordered set -> similar to set , unordered  all the opeartions O(1) but once in a millenium it goes O(n) in the worst case 
    unordered_set<int> uset;
    cout<<"unordered set"<<endl;
    uset.emplace(10);
    uset.emplace(5);
    for(auto i:uset)
        cout<<i<<endl;
    


    // map -> {key,value} stores unique keys in sorted ordered

    // map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    // map<pair<int,int>,int> mpp;
    cout<<"map : "<<endl;
    // mpp[1] = 2; //internally { 1, 2 }
    // mpp.emplace(3,1);
    // mpp.emplace(20,40);
    mpp[10] = {20,30};
    mpp[20] = {30,40};
    for(auto m:mpp){
        cout<<m.second.first<<" "<<endl;
    }

    cout<<"compartors using : "<<endl;
    pair<int,int> paaa[] = {{1,2},{4,2}};
    int n = size(paaa);
    sort(paaa,paaa+n,comp);
    for(auto i:paaa){
        cout<<i.first<<","<<i.second<<endl;
    }


   

    return 0;
}