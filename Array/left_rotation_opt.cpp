#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){
	int a = arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=a;
}


int main(){
	int n,d;
	cin>>n>>d;
int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}	
	
	while(d--){
		rotate(arr,n);
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
