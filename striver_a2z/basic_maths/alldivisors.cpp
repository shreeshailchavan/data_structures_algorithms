#include<bits/stdc++.h>
using namespace std;

void printDivisors(int &n){
    set<int> nums;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            nums.emplace(i);
            nums.emplace(n/i);
        }
    }
    for(auto it=nums.begin();it!=nums.end();it++)
        cout<<*(it)<<endl;
}

int main(){
    int n = 5;
    printDivisors(n);
    return 0;
}