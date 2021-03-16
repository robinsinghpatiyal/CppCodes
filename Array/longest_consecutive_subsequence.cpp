#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {6, 6, 2, 3, 1, 4, 1, 5, 6, 2, 8, 7, 4, 2, 1, 3, 4, 5, 9, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int count=1;
	//1,2,3,4,5,6,9
	//1,2,4,5,6,7
	
	//1,2,3,4,9,10,20
	
	int real = 1;
	
	for(int i =0;i<n;i++){
		if(arr[i+1] == arr[i]+1){
			count++;
			real = max(count, real);
		}
		else if(arr[i+1]==arr[i])
			count=count;
		else
			count=1;
	}
	cout<<real;
}
