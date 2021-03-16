#include<bits/stdc++.h>
using namespace std;

long long sol(vector<long long> arr, long long n){
	sort(arr.begin(),arr.end());
	
	long long solution =1;
	
	for(int i =0;i<n && arr[i]<= solution ;i++){
	
		solution = arr[i]+solution;
		
	}
	return solution;
	
}

int main(){
	vector<long long> arr = {1,10,3,11,6,15};
	long long n = arr.size();
	long long ans = sol(arr,n);
	cout<<ans;
}
