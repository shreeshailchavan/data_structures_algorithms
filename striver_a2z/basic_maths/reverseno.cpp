#include<bits/stdc++.h>
using namespace std;


void reverse(int num){
    int rev = 0;
    while(num > 0){
        rev = rev * 10 + num%10;
        num = num%10;
    }
    cout<<"reverse : "<<rev<<endl;
}
int main(){
    reverse(7789);
    return 0;
}