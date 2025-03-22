#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key)   return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,3,2,0,45,32,11};
    int size = sizeof(arr)/sizeof(int);
    int result = search(arr,size,11);
    cout<< result <<endl;
    return 0;


}