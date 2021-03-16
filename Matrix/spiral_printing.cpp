#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	int r1 = 0; int c1=0;
	
	/*
	r1 = starting row index
	c1 = starting row index
	r = number of rows / ending row index
	c = number of columns /ending column index
	*/
	
	while(r1<r && c1<c){
		
		for(int i = c1; i<c;i++){
			cout<<arr[r1][i];
		}
		r1++;
		
		
		for(int i = r1; i<r ;i++){
			cout<<arr[i][c-1];
		}
		c--;
		
		while(r1<r){
			for(int i = c-1; i>=c1;i--){
				cout<<arr[r-1][i];
			}
			r--;
			
		while(c1<c){
			for(int i = r-1;i>=r1;i--){
				cout<<arr[i][c1];
			}
			c1++;
		}
		}
		
	}
	
}
