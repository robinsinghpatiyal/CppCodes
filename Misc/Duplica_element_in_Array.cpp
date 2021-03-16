//Finding a duplicate number in an array

#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n){
	int req;
	cout<<"The repeating elements are : ";
	for(int i = 0;i<n;i++){
		for(int j = i+1; j<n; j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" , ";	
			}
		}
	}
}

int main(){
	int n;
	//cout<<"Enter the size of array: ";
	//cin>> n;
	//int arr[n];
	/*for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	*/
	int arr[]={1,1,5,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,size);
}
