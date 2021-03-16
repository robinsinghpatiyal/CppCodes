#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r;
	cin>>n>>r;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	while(r>0){
		for(int i=0;i<n;i++){
			swap(arr[i],arr[n-1]);
		}
		r--;
	}
	int i=0;
	while(i<n){
		cout<<arr[i]<<endl;
		i++;
	}
}
