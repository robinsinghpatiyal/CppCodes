//Find pair of array with the given sum

#include<bits/stdc++.h>
using namespace std;

void findpair(int arr[],int sum, int size){
	int count = 0;
	
	for (int i=0;i<size;i++){
		for (int j=i;j<size;j++){
			if(i!=j){
			if(arr[i]+arr[j]==sum){
			cout<<"["<<arr[i]<<","<<arr[j]<<"] "<<",";
			count++;
		}
	}
			
	}
	}
	if(count==0)
		cout<<"No pairs found";
}


int main(){
	
	int arr[]={1,2,3,4,5,6};
	int sum = 6 ;
	int size = sizeof(arr)/sizeof(arr[0]);
	findpair(arr,sum,size);
	
}
