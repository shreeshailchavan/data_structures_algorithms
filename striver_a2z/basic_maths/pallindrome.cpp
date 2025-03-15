#include<bits/stdc++.h>
using namespace std;

void pallindrome(int num){
    int rev = 0;
    int p = num;
    while(num > 0){
        rev = rev*10 + num%10;
        num = num /10;
    }

    if(p == rev)
        cout<<"is pallindrome"<<endl;
    else
        cout<<"not pallindrome"<<endl;
    
}
int main(){
    return 0;
}