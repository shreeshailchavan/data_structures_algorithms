#include<bits/stdc++.h>

using namespace std;

void armstrong(int num){
    int arm = num;
    int sum = 0;
    while(num > 0){
        int rem = num%10;
        int cube = rem*rem*rem;
        sum = sum+cube;
        num = num/10;
    }
    if(arm == sum)
        cout<<arm<<" is armstrong number"<<endl;
    else
        cout<<arm<<" is non-armstrong number"<<endl;
}
int main(){
    armstrong(371);
    return 0;
}