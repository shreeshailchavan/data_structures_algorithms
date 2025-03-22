#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    vector<int> ans;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    int arr1[] = {1 ,2 ,2 ,2 ,3 ,4};
    int arr2[] = {2 ,2 ,3 ,3};
    int n = sizeof(arr1)/sizeof(int);
    int m = sizeof(arr2)/sizeof(int);
    vector<int> ans = findIntersection(arr1,arr2,n,m);
    for(int i:ans)
        cout<<i<<" ";
    return 0;
}