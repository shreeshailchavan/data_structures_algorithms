#include<bits/stdc++.h>
using namespace std;

void swapalternate(int arr[],int size){
    int start=0,next = 1;
    while(next < size){
        swap(arr[start],arr[next]);
        start+=2;
        next+=2;
    }
}
int main(){
    int arr[] = { 1,2,3,4,5,6};
    swapalternate(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout << arr[i] <<" ";
    }
    return 0;
}