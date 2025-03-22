#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if(sum == s){
                ans.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr({2,-3,3,3,-2});
    int sum = 0;
    vector<vector<int>> ans = pairSum(arr,sum);
    for(auto i:ans){
        cout<<i[0] << " "<<i[1]<<endl;
    }
    return 0;
}