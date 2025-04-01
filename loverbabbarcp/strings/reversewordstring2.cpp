#include<bits/stdc++.h>
#include<string.h>
using namespace std;


void reverse(vector<char>& s,int start,int end){
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
void reverseWords(vector<char>& s){
    int i=0,j=1;
    int n = s.size();
    while(j<n && i<n){
        if(s[j] == ' '){
            reverse(s,i,j-1);
            i=j+1;
        }
        j++;
    }
}

int main(){
    vector<char> s = {'M','y',' ','l','o','v','e',' ','i','s',' ',' '};
    reverseWords(s);
    for(auto c:s)
        cout<<c;
    return 0;
}