#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i] == 0)
            i++;
        else if(arr[j] == 0 || arr[j] == 1){
            swap(arr[i],arr[j]);
            i++;
        }
        else if(arr[j] == 2)
            j--;
    }
}

int main(){
    int arr[] = {0,2,2,1,0,1,1,0,2};
    int n = sizeof(arr)/sizeof(int);
    sort012(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i] <<" ";

    return 0;
}