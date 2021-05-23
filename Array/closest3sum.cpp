#include<bits/stdc++.h>
using namespace std;

int closest3sum(int arr[],int N, int x){
	
	sort(arr,arr+N);
	int diff = INT_MAX;
	int sum;
	
	for(int i=0;i<N-2;i++){
		
		int left = i+1;
		int right = N-1;
		while(left<right){
			int currSum = arr[i]+arr[left]+arr[right];
			cout<<currSum<<endl;
			int temp = abs(currSum-x);
			
			if(temp<diff){
				diff = temp;
				sum = currSum;
			}
			if(currSum>x){
				right--;
			}
			if(currSum<x){
				left++;
			}
			else{
				//return x;
			}
		}
		return sum;
		
	}
	
}

int main(){
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	
	int ans = closest3sum(arr,N,x);
	cout<<ans;
}

/*
4
-1 2 1 -4
1
*/
