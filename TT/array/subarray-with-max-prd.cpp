#include<bits/stdc++.h>
using namespace std;
void prod(int arr[], int n,int k){
	int max_prod =1;
	for(int i =0;i<k;i++){
		max_prod *= arr[i];
	}
	int curr_max = max_prod;
	
	for(int i =1;i<n-k;i++){
		int curr_prod = (curr_max/arr[i-1])*arr[i+k+1];
		max_prod = max(curr_max,max_prod);
		curr_max = max_prod;
	}
	cout<<max_prod;
}

int main(){
	int arr[] = {1,2,3,4,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k;
	cin>>k;
	prod(arr,n,k);
}
