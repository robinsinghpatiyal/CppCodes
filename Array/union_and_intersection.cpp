#include<bits/stdc++.h>
using namespace std;


int main(){
	int ar1[]={1,2,4,5,7,8};
	int ar2[]={2,3,5,6,8};
	int n1 = sizeof(ar1)/sizeof(ar1[0]);
	int n2 = sizeof(ar2)/sizeof(ar2[0]);
	int a =0, b=0;
	int ar3[n1+n2];
	int ar4[min(n1,n2)];
	
	for(int i =0; i<n1; i++){
		for(int j=0; j<n2; j++){
			if(ar1[i]==ar2[j]){
				ar4[a]=ar2[j];
			//	cout<<ar4[a];
				a=a+1;	
			}
		}
		
		ar3[b]=ar1[i];
		b=b+1;
	}
	int n22=n2-1;
	
	while(n22>0){
			ar3[b]=ar2[n22];
			b=b+1;
			n22=n22-1;
	
	}
	
	
	
	for(int i =0; i<a; i++){
		cout<<ar4[i]<<" ";
	}
	cout<<endl<<endl;
	for(int i =0; i<b; i++){
		cout<<ar3[i]<<" ";
	}
}
