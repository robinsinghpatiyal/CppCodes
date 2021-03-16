#include<bits/stdc++.h>
using namespace std;

int * sort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}

/*
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
*/	
	return arr;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a;
	
	int *ar;
	ar = sort(arr,n);
	cout<<endl;
	
	//cout<<*ar[0];

	
	for(int i=0;i<n;i++){
		if(*(ar+i) == *(ar+1+i)){
			cout<<*(ar+i);
		}
	}
	

}
