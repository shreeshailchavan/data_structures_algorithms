#include<bits/stdc++.h>
using namespace std;

void reveres(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    reveres(arr,size);
    return 0;

}