#include<bits/stdc++.h>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	int n = r*c;
	int arr1[n];
	
	for(int i =0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	int index =0;
	
	for(int i =0;i<r;i++){
		for(int j=0;j<c;j++){
			arr1[index]= arr[i][j];
			index++;
		}
	}
	
		

	sort(arr1, arr1+n);

	int mid = (n-1)/2;
	
	if((n-1)%2==0){
		cout<<arr1[mid];
	}
	else{
		double out = (arr1[mid]+arr1[mid-1])/2;
		cout<<out;
	}
	
}
