#include<bits/stdc++.h>
using namespace std;

int sol(int arr[], int n){
	int el = arr[0];
	int max_index = 0;
	int count =1;
	
	for(int i =1;i<n;i++){
		if(arr[i] != el ){
			count--;
		}
		else{
			count++;
		}
		
		if(count ==0){
			count = 1;
			max_index = i;
		}
	}
	int num = arr[max_index];
	count =0;
	
	for(int i =0;i<n;i++){
		if(num==arr[i]){
			count++;
		}
	}
	if(count > n/2){
		return num;
	}
	else{
		return -1;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n;i++){
		cin>>arr[i];
	}
	int ans = sol(arr,n);
	cout<<ans;
}
