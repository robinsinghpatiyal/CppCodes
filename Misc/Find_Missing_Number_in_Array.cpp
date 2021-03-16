//Program to find the missing number in an array

#include <bits/stdc++.h>
using namespace std;

int missing(int arr[], int n){
	int total= ((n+1)*(n+2))/2;
//	cout<<total<<endl;
	
	int arrtotal =0;
	
	for(int i = 0; i<n; i++){
		arrtotal = arrtotal+arr[i];
	}
	
	int miss = total-arrtotal;
	
	return miss;
}

int main(){
	int arr[]={1,2,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int miss = missing(arr,n);
	cout<<"The missing number is: "<<miss;
	
}
