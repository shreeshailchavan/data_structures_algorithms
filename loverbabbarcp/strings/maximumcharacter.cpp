#include<bits/stdc++.h>
using namespace std;


char maxOccurCharacter(string s){
    int alphas[26] = {0};
    int maxi = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            ++alphas[s[i]-'a'];
        }
        else{
            ++alphas[ch-'A'];
        }
    }

    int ans = -1;
    for(int i=0;i<26;i++){
        if(maxi < alphas[i] && s[ans] < s[i]){
            maxi = alphas[i];
            ans = i;
        }
    }
    return s[ans];
}
int main(){
    cout<<maxOccurCharacter("shreeshail")<<endl;
    return 0;
}