#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,4,1,3,5,2,4,9,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max=0,min=9999,i;
	for(i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min=arr[i];
	}
	cout<<"The max is : "<<max<<" and the min is : "<<min<<endl;
}
