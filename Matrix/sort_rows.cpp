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
	
	/*
	
	//using bubble sort
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			
				//using bubble sort here
					for(int k =0;k<c-1;k++){
						if(arr[i][k]>arr[i][k+1])
							swap(arr[i][k],arr[i][k+1]);
					}
			
		}
	}
	
	*/
	
	//using sort()
	
	for(int i=0;i<r;i++){
		sort(arr[i],arr[i]+c);
	}
	cout<<endl;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
