#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	int count=0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		if(arr[i]>arr[j]){
			swap(arr[i],arr[j]);
			count=count+1;
		}
		
}
cout<<count;
}
