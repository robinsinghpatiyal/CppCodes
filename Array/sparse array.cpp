#include<bits/stdc++.h>
using namespace std;

int funct(string ar1[],string ar2[],int n,int m){
	int arr[m]={0};
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(ar2[i]==ar1[j]){
				arr[i]=arr[i]+1;
			}
		}
	}
	
	for(int i=0;i<m;i++){
		cout<<arr[i]<<" ";
	}
	
	
	//return arr;
}


int main(){
	int n;
	cin>>n;
	string ar1[n];
	for(int i=0;i<n;i++){
		cin>>ar1[i];
	}
	int m;
	cin>>m;
	string ar2[m];
	for(int i=0;i<m;i++){
		cin>>ar2[i];
	}
	
	funct(ar1,ar2,n,m);
	
	//int *ptr = funct(ar1,ar2,n,m);
	
//	cout<<ptr[1];
}
