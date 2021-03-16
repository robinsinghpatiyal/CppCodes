#include<bits/stdc++.h>
using namespace std;

void sol(){
	int n,a;
	cin>>n>>a;
	int arr[n];
	for(int i =0 ;i<n;i++){
		cin>>arr[i];
	}
	int count =0;
	
	for(int i =0; i<n;i++){
		if(arr[i]==a && arr[i-1]!=a){
			cout<<i<<" ";
			count=1;
		}
		if(arr[i]==a && arr[i+1]!=a){
			cout<<i<<" ";
			count=1;
		}
	}
	if(count ==0)
	    cout<<-1;
	
}

int main(){
	int test;
	cin>>test;
	while(test--){
		sol();
		cout<<endl;
	}
}
