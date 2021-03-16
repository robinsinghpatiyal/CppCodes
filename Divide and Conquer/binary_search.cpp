#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int r, int x){
	
	if(r>=l){
		int mid = l+(r-l)/2;
		cout<<mid<<endl;
		
		if(x==arr[mid]){
			return mid;
		}
		
		else if(x<arr[mid]){
			return binarysearch(arr,l,mid-1,x);
		}
		else{
			return binarysearch(arr,mid+1,r,x);
		}
	}
		return -1;
	
}

int main(){
	int arr[]={0,1,2,3,4,5,6,7,8};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<binarysearch(arr,0,n-1,7);

}
