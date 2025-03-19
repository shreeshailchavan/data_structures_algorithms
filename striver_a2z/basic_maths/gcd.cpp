#include<bits/stdc++.h>
using namespace std;
// iterative
// void gcd(int a,int b){
//     while(a != b){
//         if(a > b){
//             a = a-b;
//         }
//         else
//             b = b-a;
//     }
//     if(a!=0)
//         cout<<a<<" is the gcd";
//     else
//         cout<<b<<" is the gcd";
// }


// recursive
void gcd(int a, int b){
    if(a == 0 || b == 0){
        if(a != 0)
            cout<<a<<" is the gcd";
        else
            cout<<b<<" is the gcd";
        return;
    }
    if(a > b)
        a = a%b;
    else
        b = b%a;
    gcd(a,b);
}

int main(){
    gcd(52,10);
    return 0;
}