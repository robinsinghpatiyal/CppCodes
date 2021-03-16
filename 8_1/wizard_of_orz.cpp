#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	int a=8;
	int arr[n];
	arr[0]=9;
	if(n>1){
	for(int i=1;i<n;i++){
		arr[i]=a;
		if(a==9){
			a=-1;
		}
		a++;
	}
	
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		solution();
		cout<<endl;
	}
}
