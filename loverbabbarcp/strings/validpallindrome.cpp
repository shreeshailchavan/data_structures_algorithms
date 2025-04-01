#include<bits/stdc++.h>
#include<string.h>
using namespace std;



char toLowerCase(char ch){
    if(!((ch >= 'a' && ch <= 'z') || (ch >= '0' || ch <= '9')))
        return ch - 'A' + 'a';
    return ch;
}
bool isValidPallindrome(string s){
    string polished = "";
    int n = s.length();
    for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            polished.push_back((char)toLowerCase(s[i]));
        }
    }

    int pn=polished.length();
    int st=0,end=pn-1;
    while(st<=end){
        if(polished[st] != polished[end])
            return 0;
        st++;
        end--;
    }
    cout<< polished << endl;
    return true;
}

int main(){

    string s = "a,k,a9090";
    cout << (isValidPallindrome(s) ? "YES" : "NO")<<endl;
    return 0;
}