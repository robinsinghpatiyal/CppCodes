#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int lb,int mid, int up){
	int n = mid-lb+1;
	int m = up-mid;
	
	int a[n];
	int b[m];
	
	for(int i=0;i<n;i++){
		a[i]=arr[i+lb];
	}
	
	for(int i =0;i<m;i++){
		b[i]=arr[mid+1+i];
	}
	
	
	int k=lb;
	int i = 0;
	int j=0;
	
	while(i<n&&j<m){
		if(a[i]<b[j]){
			arr[k]=a[i];
			i++;
		}
		else if (a[i]>=b[j]){
			arr[k]=b[j];
			j++;
		}
		k++;
	}
	
	while(j<m){
		arr[k]=b[j];
		j++;
		k++;
	}
	while(i<n){
		arr[k]=a[i];
		i++;
		k++;
	}
	
}

void mergesort(int arr[], int lb, int up){
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(lb<up)
	{
		int mid = (up-1)+lb/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,up);
		merge(arr,lb,mid,up);
	}

}



int main(){
	int arr[]={4,2,1,2,5,6,7,5,4,2,11,23,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int lb =0;
	int up=n-1;
	
	mergesort(arr,lb,up);
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}
