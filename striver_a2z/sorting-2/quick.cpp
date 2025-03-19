#include<bits/stdc++.h>
using namespace std;

int sort(vector<int>& arr,int l,int h){
    int pivot = arr[l];
    int i=l,j=h;
    while(i<j){
        // get the largest elem in left part
        while(arr[i]<=pivot && i<=h-1){
            i++;
        }
        //get the first smallest elem in the right part
        while(arr[j]>pivot && j>=l+1){
            j--;
        }
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;

}
void qS(vector<int>& arr,int l, int h){
    if(l<h){
        int pi = sort(arr,l,h);
        qS(arr,l,pi);
        qS(arr,pi+1,h);
    }
}
int main(){
    vector<int> v({4,6,2,5,7,9,1,3});
    qS(v,0,v.size()-1);

    for(auto i:v)
        cout<<i<<" ";
    return 0;
}