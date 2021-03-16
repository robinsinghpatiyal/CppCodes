#include<bits/stdc++.h>
using namespace std;

void rightrotate(int arr[], int n, int outofplace, int cur)
{
    int tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}

int main(){
	int n;
	int arr[]={1, 2, 3, -4, -1, 4};
	n = sizeof(arr)/sizeof(arr[0]);
	
	int outofplace = -1;
	
	for(int i =0; i<n; i++){
		
	if(outofplace>=0){
		
		if((arr[i]>=0 && arr[outofplace]<0) || (arr[i]<0 && arr[outofplace]>=0) ){
			rightrotate(arr,n,outofplace,i);
		if(i-outofplace>=2){
			outofplace = outofplace+2;
		}
		else
			outofplace = -1;
		}
		
	}
		
	
	if(outofplace==-1){
		if(((arr[i]<0) && (i & 0x01)) ||((arr[i]>=0 )&& (!(i & 0x01)))){
			outofplace = i;
		}
	}
	
	
}


	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
}
