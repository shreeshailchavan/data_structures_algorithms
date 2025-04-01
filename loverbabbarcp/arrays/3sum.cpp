#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int sum = arr[i]+arr[j]+arr[k];
				if(sum == K){
                    cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
	return ans;
}

int main(){
    vector<vector<int>> ans = findTriplets({10,5,5,5,2},5,12);
    return 0;
}