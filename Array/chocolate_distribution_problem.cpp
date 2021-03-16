#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int s;
	cin>>s;
	
	sort(arr,arr+n);
	int i=0;
	int min=9999;
	
	while(i<=n-s){
		if(arr[i+s-1]-arr[i] < min){
			min = arr[i+s-1]-arr[i];
		}
		i++;
	}
	cout<<min;
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solution();
	}
}
