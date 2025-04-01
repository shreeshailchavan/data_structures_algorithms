#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string removeOccurrences(string s,string sub){
    while(s.length()!=0 && s.find(sub)<s.length()){
        s.erase(s.find(sub),sub.length());
    }
    return s;
}

int main(){
    cout<<removeOccurrences("dabdabcdababc","abc")<<endl;
    return 0;
}