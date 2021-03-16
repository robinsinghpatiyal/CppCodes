#include<bits/stdc++.h>
using namespace std;

void transf(int arr[],int n){
	for(int i=0;i<n;i++){
		swap(arr[i],arr[n-1]);
	}
	}
	
void sort(int arr[],int n){
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={6, 6, 2, 3, 1, 4, 1, 5, 6, 2, 8, 7, 4, 2, 1, 3, 4, 5, 9, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	/*
	transf(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	*/
	
	//sort(arr,n);
	cout<<*max_element(arr,arr+n);
	}
