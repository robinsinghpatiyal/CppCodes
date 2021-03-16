#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int ar2[n][m];
	int i,j;
	int a=0,b=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(i=0;i<n;i++){
			if(arr[i][m-1]>=arr[i+1][0]){
				ar2[a][b]=arr[i][0];
				ar2[a][b+1]=arr[i+1][m-1];
				i=i+1;
			}
			else{
				ar2[a][b]=arr[i][0];
				ar2[a][b+1]=arr[i][m-1];
			}
				a=a+1;
				b=0;
			
		}
	for(i=0;i<a;i++){
		for(j=0;j<m;j++)
		{
			cout<<ar2[i][j];
		}
	}
}
