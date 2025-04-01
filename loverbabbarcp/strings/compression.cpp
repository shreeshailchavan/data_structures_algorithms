#include<bits/stdc++.h>
using namespace std;

int compression(vector<char> &chars){
    int n = chars.size();
    int i=0;
    int ansIndex = 0;
    while(i<n){
        int j=i+1;
        while(j < n && chars[i] == chars[j]){
            j++;
        }

        // encountered non equal character
        int count = j-i;
        chars[ansIndex++] = chars[i];
        if(count > 1){
            string cnt = to_string(count);
            for(auto ch:cnt){
                chars[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return ansIndex;
}
int main(){
    vector<char> v({'a','a','b','b','c'});
    cout<<compression(v)<<endl;
    for(auto ch:v)
        cout<<ch << " ";
    return 0;

}