#include<bits/stdc++.h>
 
using namespace std;

void countsort(int arr[],int n, int pos){
	int count[10]={0};
	int b[n];
	for(int i=0;i<n;i++){
		count[(arr[i]/pos)%10]++;
	}
	
	for(int i =1;i<10;i++){
		count[i]=count[i]+count[i-1];
	}
	
	for(int i=n-1; i>=0;i--){
		b[--count[(arr[i]/pos)%10]]=arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=b[i];
	}
}

int main(){
	int arr[]={123,34,8,23,876,45,232,1,3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max = *max_element(arr,arr+n);
	
	for(int pos =1; max/pos>0; pos=pos*10){
		countsort(arr,n,pos);
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
