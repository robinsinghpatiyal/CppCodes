#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={6, -3, -10, 0, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int maxval = arr[0];
	int minval = arr[0];
	int maxproduct = arr[0];
	/*
	i	min		maxv	maxp
	1	6		6		6
	1	-18		-3		6
	2	-3		-18		6
	2	-3		180		180
	3	0		180		180
	4	0		360		
	
	*/	
	
	for(int i = 1; i<n;i++){
		if(arr[i]<0){
			swap(minval, maxval);
		}
		minval = min(arr[i],arr[i]*minval);
		maxval = max(arr[i], arr[i]*maxval);		
		maxproduct = max(maxproduct,maxval);
	}
	cout<<maxproduct;

}
