#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		if(min!=i){
				swap(arr[i],arr[min]);
			}
	}
}

int main(){
	int arr[]={5,3,4,7,9,31,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}
