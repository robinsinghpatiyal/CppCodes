#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1; int n2; 
	int n3;
	cin>>n1>>n2>>n3;
	int A[n1]; int B[n2]; int C[n3]; 
	int i=0,j=0,k=0;
	
	for(i=0;i<n1;i++){
		cin>>A[i];
	}
	
	for(j=0;j<n2;j++){
		cin>>B[j];
	}
	
	for(i=0;i<n3;i++){
		cin>>C[i];
	}
	
	i=0;
	j=0;
	k=0;
	
	/*
	A = {1, 5, 10, 20, 40, 80}
	B = {6, 7, 20, 80, 100}
	C = {3, 4, 15, 20, 30, 70, 80, 120}
	*/
	
	while(i<n1 && j<n2 && k<n3){
		
		if(A[i]<B[j])
			i++;
			
		else if(B[j]<A[i])
			j++;
			
		else if(A[i]==B[j] && A[i]>C[k])
			k++;
		
		else if(A[i]==C[k] && A[i]==C[k]){
			cout<<A[i];
			i++;
			j++;
			k++;
		}
	}
}
