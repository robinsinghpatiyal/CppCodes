#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ar1[n];
	int ar2[n];
	int max=0,max1=0;
	
	for(int i = 0;i<n;i++){
		if(arr[i]>max){
		max= arr[i];
		}
		ar1[i]=max;
	}
	
	for(int i =n-1;i>=0;i--){
		if(arr[i]>max1){
			max1=arr[i];
		}
		ar2[i]=max1;
	}
	
	/*
	arr = 7 4 0 9
	ar1 = 7 7 7 9
	ar2 = 9 9 9 9
	count = 0,3,7
	total = 0+0+3+7+0
	*/
	
	int count = 0;
	int total = 0;
	
	for(int i=0;i<n;i++){
		count = min(ar1[i],ar2[i])-arr[i];
		total = total+count;
	}
	
	cout<<endl<<total;
	
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solution();
	}
}
