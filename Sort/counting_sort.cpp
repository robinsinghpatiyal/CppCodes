#include<bits/stdc++.h>
using namespace std;


int main(){
	int arr[]={4,5,1,2,3,1,5,7,9,0,7,5,3,2,4,1,2,1,5,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int max= *max_element(arr,arr+n);
	
	int count[max]={0};
	
	int b[n];
	
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	
	for(int i=1; i<=max;i++){
		count[i]= count[i]+count[i-1];
	}
	
	for(int i=n-1;i>=0;i--){
		b[--count[arr[i]]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
}
