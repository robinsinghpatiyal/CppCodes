#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	cin>>k;
	k=k-1;

	cout<<arr[k];
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
