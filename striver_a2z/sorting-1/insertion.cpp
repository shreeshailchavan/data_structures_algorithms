#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr){
    int i=1;
    int n = arr.size();
    while(i<n){
        int key = arr[i];
        int j=i-1;
        while(arr[j] > key){
            arr[j+1] = arr[j];
            
            j--;
        }
        arr[j+1] = key;
        i++;
    }

    // printing
    for(auto j:arr)
        cout<<j<<" ";
}

int main(){
    vector<int> v({5,4,3,2,1,0});
    insertion(v);
    return 0;
}