#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];
	
	for(int i=0; i<n;i++)
		cin>>arr[i];
		
	int sum=arr[0];
	int a=sum;
		
	for(int i=1;i<n;i++){
		a= max(arr[i],arr[i]+a);
		sum = max(sum,a);

	}
	
	cout<<sum<<endl;
}
