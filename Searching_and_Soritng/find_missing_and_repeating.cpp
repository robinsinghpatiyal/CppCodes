#include<bits/stdc++.h>
using namespace std;
    int *findTwoElement(int *arr, int n) {
        // code here
	sort(arr,arr+n);
	int j=0;
	static int ar[2];
	for(int i =0;i<n;i++){
		if(arr[i+1]!=arr[i]+1 && i<n && arr[i]!=arr[i+1]){
			ar[1]=arr[i]+1;
			break;
			//j++;
		//	cout<<endl<<ar[j]<<endl;
		}
	}
	for(int i =0;i<n;i++){
	if(arr[i]==arr[i+1]){
			ar[0]=arr[i];
			break;
			//j++;
			//cout<<endl<<ar[j]<<endl;
		}
	}
	
	if(ar[1]==0) ar[1]=1;
	if(ar[1]>n) ar[1]=1;
	/*
	for(int i =0;i<2;i++){
		cout<<ar[i]<<" "<<endl;
	}
	*/
	
  
 
	return ar;
	}

int main(){
	int arr[]={12, 7, 5, 1, 13, 1, 10, 8, 11, 9, 2, 4, 3, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ans;
	ans  = findTwoElement(arr,n);
/*	for(int i =0;i<2;i++){
		cout<<*(ans+i)<<" ";
	}
	
*/
	if(ans[1]==0)
		ans[1]=1;
	cout<<ans[0]<<" "<<ans[1];
	
}
