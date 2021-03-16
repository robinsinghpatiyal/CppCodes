#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-3, 2, 3, 1, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum;
	
	for(int i=0;i<n;i++){
		sum =arr[i];
		
			if(sum==0){
				cout<<"YES"<<endl;
				break;
			}

		for(int j =i+1; j<n;j++){
			sum = sum+arr[j];
			if(sum==0){
				cout<<"YES";
				break;
			}
		}
	}
	cout<<"NO";
}
