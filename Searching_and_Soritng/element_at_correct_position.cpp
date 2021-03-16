#include<bits/stdc++.h>
using namespace std;

vector<int> sol(int arr[], int n){
	vector<int> ans;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "<<i+1<<endl;
		if(arr[i]==i+1){
			cout<<arr[i];
			ans.push_back(arr[i]);
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	auto ans = sol(arr,n);
	
	if(ans.empty()){
		cout<<"Not Found";
	}
	else{
		for(int x: ans){
			cout<<x<<" ";
		}
	}
}
