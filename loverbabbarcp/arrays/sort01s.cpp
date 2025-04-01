#include<bits/stdc++.h>
using namespace std;

void sort0sand1s(int arr[],int n){
// int i=0,j=1;
// while(j<n){
// if(arr[i] == 0)
//     i++;
// if(arr[j]==0){
//     swap(arr[i],arr[j]);
//     i++;
// }
// j++;
// }
int left = 0,right = n-1;
while(left<right){
    if(arr[left] == 0)
        left++;
    else if(arr[right] == 1)
        right--;
    else if(arr[right] == 0){
        swap(arr[left],arr[right]);
        left++;
    }
}
return;
}

int main(){
int arr[] = {1,1,1,1,0,1,0,1,1,0};
int n = sizeof(arr)/sizeof(int);
sort0sand1s(arr,n);
for(int i=0;i<n;i++){
    cout<< arr[i] <<" ";
}
return 0;

}