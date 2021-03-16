#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[1]);
	
	cout<<"The array is"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"The reversed array is"<<endl;
	
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
}

