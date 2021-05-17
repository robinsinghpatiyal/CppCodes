#include<bits/stdc++.h>
using namespace std;

void max(int arr[],int n){
	int max_ending_here = 0;
	int max_sum = INT_MIN;
	int start = 0;
	int end = 0;
	int s=0;
	
	for(int i=0;i<n;i++){
		
		max_ending_here = max_ending_here+arr[i];
		
		if(max_ending_here>max_sum){
			max_sum=max_ending_here;
			start=s;
			end=i;
			
		}
		if(max_ending_here<0){
			s=i+1;
			max_ending_here=0;
		}
		
		
	}
	cout<<max_sum<<"  "<<start<<"  "<<end;
}

int main(){
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	max(arr,n);
}
