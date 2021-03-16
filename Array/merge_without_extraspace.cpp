#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j;
	cin>>n>>m;
	int ar1[n];
	int ar2[m];
	for(i=0;i<n;i++){
		cin>>ar1[i];
	}
	cout<<endl<<endl;
	for(i=0;i<m;i++){
		cin>>ar2[i];
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(ar1[i]>ar2[j]){
				swap(ar1[i],ar2[j]);
			}
		}
	}
	
	sort(ar1,ar1+n);
	sort(ar2,ar2+n);
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<ar1[i]<<" ";
	}
	
	
	cout<<endl<<endl;
	for(i=0;i<m;i++){
		cout<<ar2[i]<<" ";
	}
	
}
