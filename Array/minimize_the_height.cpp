#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n;
	cin >>k>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ar[n];
	int max=0;
	int min=999;
	
	for(int i=0;i<n;i++){
		if(arr[i]>k){
			ar[i]=arr[i]-k;
		}
		else{
			ar[i]=arr[i]+k;
		}
	}
	
	for(int i=0;i<n;i++){
		if(ar[i]>max){
			max=ar[i];
		}
		if(ar[i]<min){
			min=ar[i];
		}
	}
	
	cout<<endl<<max-min;
}
