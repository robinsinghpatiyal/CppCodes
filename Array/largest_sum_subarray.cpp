#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=0;
	int arr[n];
	
	for(int i=0; i<n;i++)
		cin>>arr[i];
		
	int sum=arr[0];
		
	for(int i=1;i<n;i++){
		if(sum+arr[i]>sum){
			sum=sum+arr[i];
		}
	}
	
	cout<<sum<<endl;
}
