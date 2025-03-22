#include<bits/stdc++.h>
using namespace std;

// two pointer approach
int main(){
    int arr[] = {34,5,3,5,10,3,4};
    int n = sizeof(arr)/sizeof(int) -1;
    int i=0 , j = n;
    while(i<=j){
        if( i == j)
            cout<<arr[i]<<" ";
        else{
        cout<<arr[i]<<" "<<arr[j]<<" ";
        }
        i++;
        j--;
    }
    return 0;

}