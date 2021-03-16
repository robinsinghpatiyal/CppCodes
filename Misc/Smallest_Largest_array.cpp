//Finding the Smallest and Largest number from the array!

#include<bits/stdc++.h>
using namespace std;


void comp(int arr[], int n){
	int max = arr[0];
	int min = arr[0];
	
	for (int i = 0; i<n;i++){
		if(arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min=arr[i];
	}
	
	cout<<"The minimum element is: "<<min<<endl<<"The maximum element is: "<<max;
}


int main(){
	int arr[] = {1,2,5,6,0,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	comp(arr,n);
}
