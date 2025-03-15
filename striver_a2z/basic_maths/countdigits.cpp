#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// O(n)
void countDigit(int n){
    int cnt = 0;
    while(n>0){
        cnt++;
        n/=10;
    }
    cout<<"no of digits : "<<cnt;
}

// O(logn)
int logarithmic(int n){
    return (int)log10(n)+1;
}

int main(){
    return 0;
    // without using log
    countDigit(8899);
    // with using log
    cout<<"using log10 : "<<logarithmic(8899);
    return 0;

}