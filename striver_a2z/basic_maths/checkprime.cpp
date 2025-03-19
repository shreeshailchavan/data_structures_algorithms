#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            cout<<"is not prime"<<endl;
            return;
        }
    }
    cout<<"is prime"<<endl;
}

int main(){
    checkPrime(2);
    return 0;
}