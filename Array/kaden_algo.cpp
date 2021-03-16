#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int cur=0;
	int total =arr[0];
	cur = arr[0];
	
	for(int i=1;i<n;i++){
		cur = max(arr[i],cur+arr[i]);
		total = max(cur,total);
	}
	cout<<total;
}
