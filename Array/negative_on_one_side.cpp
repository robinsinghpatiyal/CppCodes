#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,5,-2,-4,3,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a[n];
	int s=0;
	int l=n-1;
	
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			a[l]=arr[i];
			l=l-1;
		}
		else{
			a[s]=arr[i];
			s=s+1;
		}
	}
	
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
