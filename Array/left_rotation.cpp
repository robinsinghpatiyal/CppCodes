#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r;
	cin>>n;
	cin>>r;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
	
	while(r>0){
		for(int i=0;i<n-1;i++){
			swap(arr[i],arr[i+1]);
		}
		r--;
	}
	
	for(int i=0;i<n;i++){
		cout<<endl<<arr[i]<<" "<<endl;
	}
}
