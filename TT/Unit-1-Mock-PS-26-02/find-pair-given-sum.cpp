#include<bits/stdc++.h>
using namespace std;

void sol(int arr[],int n,int sum){
	int start=0;
	int end = n-1;
	while(start<end){
		if(arr[start]+arr[end]==sum){
			cout<<"("<<arr[start]<<","<<arr[end]<<") ";
			start++;
			end++;
		}
		else if(arr[start]+arr[end]>sum){
			end--;
		}
		else{
			start++;
		}
	}
}

int main(){
	cout<<"Enter the size of array: ";
	int n,sum;
	cin>>n;
	cout<<endl<<"Enter the sum: ";
	cin>>sum;
	int arr[n];
	cout<<endl<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	sol(arr,n,sum);
}
