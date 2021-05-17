#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[],int n){
	int k=arr[0];
	//finding the maximum element
	for(int i=1;i<n;i++){
		if(k<arr[i]){
			k=arr[i];
		}
	}
	
	int count[k]={0};
	
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	
	for(int i=1;i<=k;i++){
		count[i] = count[i]+count[i-1];
	}
	
	int b[n];
	
	for(int i=n-1;i>=0;i--){
		b[--count[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
}

int main(){
	int arr[] = {0,0,1,5,5,8,8,9,7,5,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	countsort(arr,n);
	
}
