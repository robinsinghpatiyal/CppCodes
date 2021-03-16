#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={0,2,1,2,0};
	int a=0,b=0,c=0,d=0;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		switch(arr[i]){
		case 0:
			a++;
			break;
		case 1:
			b++;
			break;
		case 2:
			c++;
			break;
	}
}
	
	int i=0;
	
	while(a>0){
		arr[i++]=0;
		a--;
	}
	
	while(b>0){
		arr[i++]=1;
		b--;
	}
	
	while(c>0){
		arr[i++]=2;
		c--;
	}
	
	for(i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
