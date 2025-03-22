#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {34,5,3,5,10,3,4,60};
    int max = INT_MIN;
    for(int i:arr){
        if(i > max)
            max = i;
    }
    cout<<"maxi : "<<max;
    return 0;

}