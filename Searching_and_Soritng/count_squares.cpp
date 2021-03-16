#include<bits/stdc++.h>
using namespace std;

int sol(int n){
	int count =0;
	for(int i = 1; i<n;i++){
		if(i == sqrt(i) * sqrt(i)){
			count++;
		}
	}
	return count;
	
	// or 
	// return sqrt(n-1);
}

int main(){
	int n;
	cin>>n;
	int a = sol(n);
	cout<<a;
}
