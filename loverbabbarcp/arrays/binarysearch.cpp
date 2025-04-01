#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>& arr,int key){
    int start=0,end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            end=mid-1;
        else
            start=mid+1;

        mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,3,4,5,6,11,20};
    int ans = binarysearch(arr,24);
    cout<<"element found at index : " << ans << endl;
}