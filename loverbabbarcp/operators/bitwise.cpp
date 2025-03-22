#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5 , b = 4;
    cout<<"and :"<<(a&b)<<endl;
    cout<<"or : "<<(a|b)<<endl;
    cout<<"not a:"<<(~a)<<endl;
    cout<<"xor : "<<(a^b)<<endl;

    cout<<"left shift"<<endl;
    cout<<(a<<2)<<endl;
    cout<<"right shift"<<endl;
    cout<<(a>>2)<<endl;
 
    cout<<(~a)<<endl;
    return 0;
}