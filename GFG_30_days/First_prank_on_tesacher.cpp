#include<bits/stdc++.h>
using namespace std;

void prank(int arr[],int n){
	int ar[n];
	
	for(int i =0; i<n; i++){
		ar[i] = arr[arr[i]]; 
	}
	
	for(int i=0;i<n;i++){
		cout<<ar[i];
	}
}

int main(){
	int arr[]={0,5,1,2,4,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	prank(arr,n);
}
