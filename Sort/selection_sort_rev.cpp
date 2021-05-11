#include<bits/stdc++.h>
using namespace std;

void swap(int *one, int *two){
	int temp = *one;
	*one = *two;
	*two = temp;
}


void selectionsort(int arr[],int n){
	
	int minindex;
	
	for(int i=0;i<n-1;i++){
		minindex = i;
		
		for(int j=i+1;j<n;j++){
	
			if(arr[j]<arr[minindex]){
				minindex = j;
			}
		swap(&arr[i],&arr[minindex]);
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int arr[] ={5,4,2,8,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectionsort(arr,n);
}
