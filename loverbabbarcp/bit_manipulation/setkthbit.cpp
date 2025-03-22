#include<bits/stdc++.h>
using namespace std;

void setkthbit(int n,int k){
    int mask = 1;
    while(k>0){
        mask = mask<<1;
        k--;
    }
    cout<<mask<<endl;
    int ans = n | mask;
    cout<<ans;
}

int main(){
    setkthbit(15,3);
    return 0;
}