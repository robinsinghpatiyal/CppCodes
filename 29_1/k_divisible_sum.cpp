#include<bits/stdc++.h>
using namespace std;
int maxi(int ar[], int n);
void sol();

int maxi(int ar[], int n){
	int max = 0;
	int it =0;
	int j;
	/*
	for(int i =0; i<n ;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl<<endl;
	*/
	for(j=0;j<n;j++){
	//	cout<<ar[j]<<endl;
		if(ar[j] > max){
			max = ar[j];
			it = j;
		}
	}
	
//	cout<<endl<<endl;
//	cout<<"->"<<ar[it]<<endl;
	return it;
}

void sol(){
	int n,k;
	cin>>n>>k;
	if(k<n){
		k = k*2;
	}
	int arr[n] = {0};
	arr[n-1] = k;

	
	
	for(int i = 1; i<n;i++){
		int it = maxi(arr, n);
		arr[n-i-1] = arr[it]/2;
		if(arr[it]%2==0){
			arr[it] = arr[it]/2;
		}  
		else{
			arr[it] = (arr[it]/2) + 1;
		}
		
	}
	cout<<arr[n-1];
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
		cout<<endl;
	}
}
