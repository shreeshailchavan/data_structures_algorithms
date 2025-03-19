#include<bits/stdc++.h>
using namespace std;

void mrg(vector<int> &arr,int low,int mid,int high){
    int i=low,j=mid+1;
    vector<int> temp;
    while(i <= mid && j<=high){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }


    for(int m=low;m<=high;m++){
        arr[m] = temp[m-low];
    }

}

void mS(vector<int> &arr, int low , int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    mrg(arr,low,mid,high);
}

int main(){
    vector<int> arr({3,2,1,3,5,6,7,4});
    mS(arr,0,arr.size()-1);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}