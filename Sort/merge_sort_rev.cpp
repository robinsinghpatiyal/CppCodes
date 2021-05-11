#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int right, int mid){
	
	int n1 = mid-left+1;
	int n2 = right-mid;
	int Left[n1], Right[n2];

	int k = left;
	
	for(int i=0;i<n1;i++){
		Left[i]=arr[left+i];
	}
	
	for(int j = 0;j<n2;j++){
		Right[j]=arr[mid+1+j];
	}
	int i=0,j=0;
	
	while(i<n1 && j<n2){
		if(Left[i]>Right[j]){
			arr[k]=Right[j];
			j++;
		}
		else{
			arr[k]=Left[i];
			i++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=Left[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=Right[j];
		j++;
		k++;
	}
}


void mergesort(int arr[], int left, int right){
	
	if(left>=right){
		return;
	}
	
	int mid = left+(right-left)/2;
	mergesort(arr,left,mid);
	mergesort(arr,mid+1,right);
	merge(arr,left,right,mid);
	
}


void printarray(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int arr[] = {3,2,1,6,4,9,2,2,1,1,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	printarray(arr,size);
	
	mergesort(arr,0,size-1);
	
	cout<<endl;
	
	printarray(arr,size);
}
